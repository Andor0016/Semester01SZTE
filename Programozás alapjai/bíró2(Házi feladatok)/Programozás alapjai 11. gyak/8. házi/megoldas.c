#include <stdio.h>
#include <stdlib.h>

int mozgas(int *idoszelet, int poz, int szel)
{
    int left = 0, right = 0;

    if (idoszelet[poz] == 1)
        return 0;
    else if ((poz + 1 < szel && idoszelet[poz + 1] == 1) && (poz - 1 >= 0 && idoszelet[poz - 1] == 1))
    {
        for (int i = 0; i < poz; i++)
        {
            if (idoszelet[i] == 1)
                left++;
        }
        for (int i = poz + 1; i < szel; i++)
        {
            if (idoszelet[i] == 1)
                right++;
        }
        if (left > right)
            return -1;
        else if (right > left)
            return 1;
        else
            return 0;
    }
    else if (poz + 1 < szel && idoszelet[poz + 1] == 1)
        return 1;
    else if (poz - 1 >= 0 && idoszelet[poz - 1] == 1)
        return -1;
    else
        return 0;
}

int main() {
    FILE *input = fopen("be.txt", "r");
    FILE *output = fopen("ki.txt","w");
    int a, b;
    int meteorok = 0;
    fscanf(input, "%d %d ", &a, &b);
    int** map = malloc(a * sizeof(int*));
    for(int i=0; i<a; i++)
    {
        map[i] = malloc(b * sizeof(int));
    }

    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            fscanf(input, "%d ", &map[i][j]);
            if(map[i][j] == 1)
                meteorok++;
        }
    }
    int currentPos = 0;
    for(int i=0; i<b; i++)
    {
        if(map[0][i] == 1)
        {
            meteorok--;
            currentPos = i;
            break;
        }
    }
    for(int i=1; i<a; i++)
    {
        currentPos += mozgas(map[i],currentPos,b);
        if(map[i][currentPos] == 1)
            meteorok--;
    }

    //feladat befejezese
    fprintf(output,"%d\n",meteorok);
    for(int i=0; i<a; i++)
    {
        free(map[i]);
    }
    free(map);
    fclose(input);
    fclose(output);
    return 0;
}
