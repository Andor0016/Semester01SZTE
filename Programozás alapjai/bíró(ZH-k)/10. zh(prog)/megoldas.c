#include <stdio.h>
#include <stdlib.h>

int strlengt(char *a)
{
    int len = 0;
    if(a[len] == '\0')
        return 0;
    while(a[len] != '\n')
    {
        len++;
    }
    return len;
}

int main()
{
    int k;
    char **sor;
    int *sorrend;
    char data[200];
    FILE * input = fopen("be.txt", "r");
    FILE * output = fopen("ki.txt", "w");

    fscanf(input, "%d ", &k);
    sorrend = malloc(k * sizeof(int));
    int puffer = 0;

    for(int i=0; i<k; i++)
    {
        fscanf(input, "%d ", &puffer);
        if(puffer > k || puffer <= 0) {
            fprintf(output, "HIBA:OSZLOP:%d", puffer);
            goto ending_without_table;
        }
        else
            sorrend[i] = puffer;
    }

    fgets(data, 200, input);

    int elemszam = strlengt(data);
    if(elemszam == 0)
        goto ending_without_table;
    int elemekszama = elemszam/k;
    if(elemszam%k != 0)
    {
        fprintf(output, "HIBA:MARADEK");
    }
    else
    {
        sor = malloc(k * sizeof(char *));
    }
    for(int i=0; i<k; i++)
    {
        sor[i] = malloc(elemekszama * sizeof(char));
    }

    int l=0;

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<elemekszama; j++)
        {
            sor[sorrend[i]-1][j] = data[l];
            l++;
        }
    }

    for(int i=0; i<elemekszama; i++)
    {
        for(int j=0; j<k; j++)
        {
            fprintf(output,  "%c", sor[j][i]);
        }
    }

    //a memoria felszabaditasa es fajlok bezarasa
    for(int i=0; i<k; i++)
    {
        free(sor[i]);
    }
    free(sor);
    ending_without_table:
    free(sorrend);
    fprintf(output, "\n");
    fclose(input);
    fclose(output);
    return 0;
}