/***********************************************************************
* A PROGRAMBAN NEM SZEREPELHETNEK AZ ALÁBBI SOROK:
* #include <string.h>
* #include <math.h>
***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

/***********************************************************************
************************************************************************
**  ETTŐL A PONTTÓL DOLGOZHATSZ A FELADATOKON
************************************************************************
***********************************************************************/

/*
1. feladat (5 pont)

Az alabbi fuggveny feladata helyet foglalni egy ketdimenzios int tombnek.
A tomb sor- es oszlopszama megegyezik.
A tomb N meretet a fuggveny parameterkent kapja.
A helyfoglalas ugy tortenjen, hogy a ketdimenzios tomb osszes elemet
egy egydimenzios N*N-es tombben helyezzuk el sorfolytonosan.
A helyfoglalas utan toltsuk fel a tomb elemeit ertekekkel a kovetkezo modon:
Minden cellaba irjuk be a sor- es oszlopindexek osszeget.
A fuggveny terjen vissza a tombre mutato pointerrel. A memoria felszabaditasaval
nem kell foglalkoznod.
*/

int *foglal(int n) {
    int *tomb;
    tomb = malloc(n * n * sizeof(int));
    int k = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            tomb[k] = i+j;
            k++;
        }
    }

    return tomb;
}

/*
2. feladat (5 pont)

Irj egy fuggvenyt, ami egyszeru tomoritest vegez: osszevonja a karakterlancban
az egymas utan tobbszor elofordulo ugyanolyan karaktereket, es mogejuk irja,
hogy hany darab szerepelt beloluk, ami garantaltan mindenhol egy 2 es 9 kozti
szam lesz. Az egyszer elofordulo karaktereket ugy hagyja, ahogyan voltak. A
fuggveny a masodik parameterben allitsa ossze az eredmenyt.
Pelda: "eeelemerr belllla" sztringbol "e3lemer2 bel4a" lesz.
*/

/*
Write a function that performs simple compression: it combines the same
characters that occur several times in a string, and writes behind them how
many of them there were, which is guaranteed to be a number between 2 and 9
everywhere. The characters that occur once are left as they were. The function
compiles the result in the second parameter.
Example:
the string ''eeelemerr belllla''
becomes ''e3lemer2 bel4a''
*/

void betomorit(char* eredeti, char* tomoritett) {
    int i=0;
    int ti=0;
    int elofordulas = 0;
    char keresett;
    while(1){
        if(eredeti[i] == '\n')
            break;
        keresett = eredeti[i];
        elofordulas = 1;
        while(1){
            i++;
            if(keresett == eredeti[i])
            {
                elofordulas++;
            }
            else
            {
                if(elofordulas == 1)
                {
                    tomoritett[ti] = keresett;
                    ti++;
                }
                else{
                    tomoritett[ti] = keresett;
                    ti++;
                    tomoritett[ti] = '0' + elofordulas;
                    ti++;
                }
                break;
            }
        }
        tomoritett[ti] = '\n';
    }
}
/***********************************************************************
************************************************************************
**
**  EZEN A PONTON TÚL NE VÁLTOZTASS SEMMIT SEM A FÁJLON!
**
************************************************************************
***********************************************************************/

void call_1()
{
	int chck;
	int n, ij;
	int *ptr = NULL;
	if(fscanf(stdin, "%d %d", &chck, &n)!=2) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	ptr = foglal(n);
	switch (chck) {
		case 1:
			if (ptr != NULL) {
				free(ptr);
				fprintf(stdout,"%d\n", n);
			} else {
				fprintf(stdout,"NULL\n");
			}
			break;
		case 2:
			if (ptr != NULL) {
				ptr[n*n-1]=n;
				fprintf(stdout,"%d\n", n);
			} else {
				fprintf(stdout,"NULL\n");
			}
			break;
		case 3:
			for(ij=0; ij<n*n; ij++) {
				fprintf(stdout, "%d%c", ptr[ij], ((ij%n)==(n-1))?'\n':' ');
			}
			break;
		default:
			if(fscanf(stdin, "%d", &ij)!=1) {
				fprintf(stderr, "HIBA: Nem olvasható adat!\n");
				return;
			}
			fprintf(stdout,"%d\n", ptr[ij]);
			break;
	}
}
void test_1()
{
	const int n = 3;
	int i, j, k;
  int *ptr = NULL;
  struct {int ptr[9];} testlist[1] = {
  	{
  		{0,1,2, 1,2,3, 2,3,4}
  	}
  };
  for (i = 0; i < 1; ++i) {
    ptr = foglal(n);
    if (ptr == NULL) {
    	fprintf(stderr, "HIBA: NULL pointer\n");
    	return;
    } else {
    	for (j = 0; j < n; ++j) {
    		for (k = 0; k < n; ++k) {
    			if (ptr[j*n+k] != testlist[i].ptr[j*n+k]) {
    				fprintf(stderr, "HIBA a(z) (%d,%d) pozíción\n"
    					              "\telvárt eredmény: %d\n"
    					              "\tkapott eredmény: %d\n",
    					              j, k, testlist[i].ptr[j*n+k], ptr[j*n+k]);
    				return;
    			}
    		}
    	}
    }
    free(ptr);
  }
}

void call_2()
{
	char s1[100], s2[1000];
	if(fgets(s1, 100, stdin)==NULL) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	betomorit(s1,s2);
	fputs(s2, stdout);
}
void test_2()
{
	int i, j;
	char tomoritett[1000];
	struct {char eredeti[100]; char tomoritett[1000];} testlist[1] = {
		{"eeelemerr belllla", "e3lemer2 bel4a"}
	};
	for (i = 0; i < 1; ++i) {
		betomorit(testlist[i].eredeti, tomoritett);
		for(j = 0; tomoritett[j] != 0 && testlist[i].tomoritett[j] != 0 && tomoritett[j] == testlist[i].tomoritett[j]; ++j);
        if (tomoritett[j] != testlist[i].tomoritett[j]) {
			fprintf(stderr, "HIBA: betomorit(\"%s\", \"...\")\n"
							"\telvárt eredmény: \"%s\"\n"
							"\tkapott eredmény: \"%s\"\n",
					testlist[i].eredeti, testlist[i].tomoritett, tomoritett);
		}
	}
}

typedef void (*call_function)();

call_function call_table[] = {
	call_1,
	call_2,
	NULL
};


call_function test_table[] = {
	test_1,
	test_2,
	NULL
};

static int __arg_check_helper(const char * exp, const char * arg) {
    while (*exp && *arg && *exp == *arg) {
        ++exp;
        ++arg;
    }
    return *exp == *arg;
}

int main(int argc, char *argv[])
{
    int feladat, calltabsize;
    if ((argc > 1) && !(__arg_check_helper("-t", argv[1]) && __arg_check_helper("--test", argv[1]))) {
        if (argc > 2) {
            feladat = atoi(argv[2]);
            for (calltabsize=0; test_table[calltabsize]; calltabsize++);
            if (feladat <= 0 || calltabsize < feladat) {
                fprintf(stderr, "HIBA: rossz feladat sorszám: %d!\n", feladat);
                return 1;
            }
            (*test_table[feladat-1])();
        } else {
            for (feladat=0; test_table[feladat]; ++feladat) {
                (*test_table[feladat])();
            }
        }
        return 0;
    }
    if (!freopen("be.txt", "r", stdin)) {
        fprintf(stderr, "HIBA: Hiányzik a `be.txt'!\n");
        return 1;
    }
    if (!freopen("ki.txt", "w", stdout)) {
        fprintf(stderr, "HIBA: A `ki.txt' nem írható!\n");
        return 1;
    }
    for (calltabsize=0; call_table[calltabsize]; calltabsize++);
    if (fscanf(stdin, "%d%*[^\n]", &feladat)!=1) {
        fprintf(stderr, "HIBA: Nem olvasható a feladat sorszám!\n");
        return 1;
    }
    fgetc(stdin);
    if (0<feladat && feladat<=calltabsize) {
        (*call_table[feladat-1])();
    } else {
        fprintf(stderr, "HIBA: Rossz feladat sorszám: %d!\n", feladat);
        return 1;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
