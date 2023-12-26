#include <stdio.h>


int main() {
    FILE *bemeneti = fopen("be.txt", "r");
    FILE *kimeneti = fopen("ki.txt", "w");
    char kifejezes[100];

    fgets(kifejezes, 100, bemeneti);
    int hossz = 0;

    int i = 0;
    int nyitottak = 0;
    while(1)
    {

        if(kifejezes[i] == '(')
            nyitottak++;
        else if(kifejezes[i] == ')')
            nyitottak--;

        if(nyitottak < 0) {
            fprintf(kimeneti, "%d\n", i);
            break;
        }
        if(kifejezes[i] == '\n' || kifejezes[i] == '\0')
            break;
        i++;
    }
    if(nyitottak == 0)
        fprintf(kimeneti, "-1\n");
    else if (nyitottak > 0)
        fprintf(kimeneti, "%d\n", i);

    fclose(kimeneti);
    fclose(bemeneti);
    return 0;
}
