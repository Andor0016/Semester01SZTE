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

A lejto() fuggveny feladata kiszamolni azt, hogy mekkora ereszkedest kell vegrehajtani
a legnagyobb szintkulonbsegu szakasz lekuzdesehez egy szakaszokbol felepulo hegyvideki tura soran.
A parameterben kapott terkep tomb a turautvonal szakaszait zaro allomasok tengerszint
feletti magassagertekeit tartalmazza. A masodik parameter ennek a tombnek a hosszat
adja meg, vagyis az allomasok szamat. A fuggveny kiszamolna, hogy mekkora a legnagyobb kulonbseg
a kovetkezo es az aktualis allomas kozott, ott ahol a kovetkezo allomas eleresehez lefele kell haladni.
Vedd szemugyre a probainputot es a hozza tartozo kimenetet.

A fuggveny megvalositasa hibakat tartalmaz.
Javitsd ki ezeket a hibakat.
*/
int lejto(int terkep[], int n) {
    int szint = 0;
    int maxszint = 0;
    int i;
    for (i = 0; i < n-1; ++i) {
        if (terkep[i] > terkep[i+1]) {
            szint = terkep[i] - terkep[i+1];
            if (szint > maxszint) {
                maxszint = szint;
            }
        } else {
            szint = 0;
        }
    }
    return maxszint;
}

/*
2. feladat (5 pont)

A feladat egy fuggveny megirasa, amely parameterul var egy egesz szamokbol
allo tombot, ket szamot, illetve ket egesz szamra mutato pointert. A tombben pozitiv
egesz szamok vannak, a tomb veget az elso nempozitiv ertek jelzi.

A fuggveny feladata, hogy meghatarozza a tombben levo elemek kozul a legnagyobb
N-nel oszthato, illetve legnagyobb M-mel oszthato erteket.
A pn pointer altal mutatott ertek legyen a legnagyobb N-nel oszthato szam,
mig a pm altal mutatott ertek legyen a legnagyobb M-mel oszthato szam,
ami a tombben elofordul.

Amennyiben a tombben egy N-nel / M-mel oszthato ertek sem fordul elo, akkor a
pointer altal mutatott ertek legyen a tomb veget jelzo ertek.

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!

The task is to write a function that takes as parameters an array of integers,
two numbers, and two pointers to integers. The array contains positive integers
and the end of the array is indicated by the first non-positive value.

The function is to determine the largest value divisible by N and the
largest value divisible by M of the elements in the array. The value pointed
to by the pointer pn should be the largest number divisible by N, while the
value pointed to by the pointer pm should be the largest number divisible
by M that occurs in the array.

If no value divisible by N / M occurs in the array, then the value pointed
to by the pointer should be the value indicating the end of the array.

Write the function in C. Do not change the function header.
The inputs of the function are the parameters, the output is the return value.
The function does not perform IO operations.

*/
void statisztika(int szamok[], int N, int M, int* pn, int* pm) {
    int i=0;
    *pn = 0;
    *pm = 0;
    while(szamok[i]>0)
    {
        if(szamok[i]%N == 0)
        {
            if(szamok[i] > *pn)
            {
                *pn = szamok[i];
            }
        }
        if(szamok[i]%M == 0)
        {
            if(szamok[i] > *pm)
            {
                *pm = szamok[i];
            }
        }
        i++;
    }
    if(*pn == 0)
        *pn = szamok[i];

    if(*pm == 0)
        *pm = szamok[i];
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
    char c;
    int i, n, terkep[128];

    if(fscanf(stdin, "%d\n", &n)!=1) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    for (i=0; i<n; ++i) {
        if (fscanf(stdin, "%d", terkep + i)!=1) {
            fprintf(stderr, "HIBA: Nem olvasható adat!\n");
            return;
        }
    }

    if(fscanf(stdin, "\n%c", &c)!=1) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    if (i > 0) {
        switch (c) {
            case 'G':
                terkep[i] = terkep[i-1] + 10;
                break;
            case 'E':
                terkep[i] = terkep[i-1];
                break;
            case 'L':
                terkep[i] = terkep[i-1] - 10;
                break;
            default:
                fprintf(stderr, "HIBA: Hibás adat='%c'!\n", c);
                return;
        }
    }

    fprintf(stdout, "%d\n", lejto(terkep, n));
}
void test_1()
{
  int i, j, eredmeny;
  struct {int terkep[128]; int n; int eredmeny;} testlist[1] = {
    {{150,134,132,112,101,90,90,163,152,147,140,140}, 12, 20},
  };
  fprintf(stderr, "=== 1. feladat tesztelése ===\n");
  for (i = 0; i < 1; ++i) {
    fprintf(stderr, "%d. teszteset ... ", i + 1);
    eredmeny = lejto(testlist[i].terkep, testlist[i].n);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: lejto({");
      for(j = 0; j < testlist[i].n - 1; fprintf(stderr, "%d,", testlist[i].terkep[j++]));
      fprintf(stderr, "%d}, %d)\n", testlist[i].terkep[j], testlist[i].n);
      fprintf(stderr, "\telvárt eredmény: %d\n"
                      "\tkapott eredmény: %d\n",
                      testlist[i].eredmeny, eredmeny);
    } else
      fprintf(stderr, "OK\n");
  }
}

void call_2()
{
	int n, m, meret;

	if(fscanf(stdin, "%d", &meret) != 1) {
		fprintf(stderr, "HIBA: Nem olvasható adat (meret)!\n");
		return;
	}

	if(fscanf(stdin, "%d", &n) != 1) {
		fprintf(stderr, "HIBA: Nem olvasható adat (n)!\n");
		return;
	}

	if(fscanf(stdin, "%d", &m) != 1) {
		fprintf(stderr, "HIBA: Nem olvasható adat (m)!\n");
		return;
	}

	int tomb[meret];
	for (int i = 0; i < meret; i++){
		if(fscanf(stdin, "%d", &tomb[i]) != 1) {
			fprintf(stderr, "HIBA: Nem olvasható (tomb[%d])!\n", i);
			return;
		}
	}

	int *pn = (int*)malloc(sizeof(int));
	if (pn == NULL) {
		fprintf(stderr, "HIBA: Nem foglalható memória (pn)\n");
		return;
	}

	int *pm = (int*)malloc(sizeof(int));
	if (pm == NULL) {
		fprintf(stderr, "HIBA: Nem foglalható memória (pm)\n");
		free(pn);
		return;
	}

	*pn = 9876;
	*pm = 5432;

	statisztika(tomb, n, m, pn, pm);

	if (pn != NULL) {
		fprintf(stdout, "%d\n", *pn);
		free(pn);
	} else {
		fprintf(stdout, "NULL\n");
	}

	if (pm != NULL) {
		fprintf(stdout, "%d\n", *pm);
		free(pm);
	} else {
		fprintf(stdout, "NULL\n");
	}
}
void test_2()
{
	struct {int tomb[5]; int n; int m; int maxN; int maxM;} testlist[2] = {
		{ { 1, 5, 4, 3, -1}, 2, 3, 4, 3 },
		{ { 7, 2, 4, 5, -5}, 2, 3, 4, -5 },
	};
	fprintf(stderr, "=== 2. feladat tesztelése ===\n");
	for (int i = 0; i < 2; ++i) {
		fprintf(stderr, "%d. teszteset ... ", i + 1);
		int *pn = (int*)malloc(sizeof(int));
		int *pm = (int*)malloc(sizeof(int));
		statisztika(testlist[i].tomb, testlist[i].n, testlist[i].m, pn, pm);
		if (pn == NULL) {
			fprintf(stderr, "HIBA: NULL pointer (pn)\n");
			if (pm) free(pm);
			continue;
		}
		if (pm == NULL) {
			fprintf(stderr, "HIBA: NULL pointer (pm)\n");
			if (pn) free(pn);
			continue;
		}
		if (*pn != testlist[i].maxN || *pm != testlist[i].maxM) {
			fprintf(stderr, "HIBA statisztika({");
			int j = 0; for (; testlist[i].tomb[j] > 0; fprintf(stderr, "%d,", testlist[i].tomb[j++]));
			fprintf(stderr, "%d}, %d, %d)\n"
				"\telvárt eredmény: %d %d\n"
				"\tkapott eredmény: %d %d\n",
				testlist[i].tomb[j], testlist[i].n, testlist[i].m,
				testlist[i].maxN, testlist[i].maxM,
				*pn, *pm);
		} else
			fprintf(stderr, "OK\n");
		if (pn) free(pn);
		if (pm) free(pm);
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
