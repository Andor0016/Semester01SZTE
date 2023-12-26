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

Irj egy haromszog nevu strukturat, ami az
a es m nevu float tipusu mezoiben
egy haromszog alapjat illetve a hozza tartozo magassagot tarolja.
Irj egy compare nevu fuggvenyt, ami ket ilyen
haromszoget kap parameterul, es a nagyobb teruletuvel ter vissza.
Amennyiben a ket haromszog terulete egyforma, akkor a fuggveny
az elso parameterben kapott haromszoget adja vissza.
A haromszog terulete: (a*m)/2.
*/
/****************************************************
 * A kovetkezo sor programba illesztese eseten      *
 * (// torlese a #define elol) a feladat nem okoz   *
 * forditasi hibat, de pontot sem fog erni.         *
 ****************************************************/
//#define KIHAGY_1
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))

haromszog compare(haromszog h1, haromszog h2) {
}

#endif

/*
2. feladat (5 pont)

Az alabbi fuggveny egy olyan sztringet kap parameterkent, amelyben egy utvonal
van lekodolva az 'f' (fel), 'l' (le), 'j' (jobbra), 'b' (balra),
'q' (balra-fel), 'w' (jobbra-fel), 'a' (balra-le), 's' (jobbra-le) karakterek
segitsegevel. A szokasos modon, azaz 0 kodu karakterrel lezart sztring mas
karaktert nem tartalmaz. A fuggveny visszateresi erteke egyetlen szam, ami
megmondja, hogy a sztringben kodolt lepesek vegrehajtasa utan legkevesebb
hany lepessel juthatunk vissza a kiindulopontba, ha ehhez az atlos lepeseket
mar nem hasznalhatjuk.
*/

int tavolsag(char ut[]) {
}
/***********************************************************************
************************************************************************
**
**  EZEN A PONTON TÚL NE VÁLTOZTASS SEMMIT SEM A FÁJLON!
**
************************************************************************
***********************************************************************/

void call_1(){
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))
  int v;
  haromszog a, b, x;
  if(fscanf(stdin, "%d", &v)!=1) {
    fprintf(stderr, "HIBA: Nem olvasható adat!\n");
    return;
  }
  switch(v) {
  case 1:
    if(fscanf(stdin, "%d", &v)!=1) {
      fprintf(stderr, "HIBA: Nem olvasható adat!\n");
      return;
    }
    fprintf(stdout, "fordul%d\n", v);
    break;
  default:
    if(fscanf(stdin, "%f %f", &a.a, &a.m)!=2) {
      fprintf(stderr, "HIBA: Nem olvasható adat!\n");
      return;
    }
    if(fscanf(stdin, "%f %f", &b.a, &b.m)!=2) {
      fprintf(stderr, "HIBA: Nem olvasható adat!\n");
      return;
    }
    x = compare(a, b);
    fprintf(stdout, "[%f,%f]\n", x.a, x.m);
    break;
  }
#endif
}
void test_1(){
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))
  int i;
  haromszog eredmeny;
  struct {haromszog a, b, eredmeny;} testlist[2] = {
    {{.a=3, .m=10}, {.a=6, .m=5 }, {.a=3, .m=10}},
    {{.a=2, .m=5 }, {.a=3, .m=14}, {.a=3, .m=14}}
  };
  for (i = 0; i < 2; ++i) {
    eredmeny = compare(testlist[i].a, testlist[i].b);
    if (eredmeny.a != testlist[i].eredmeny.a || eredmeny.m != testlist[i].eredmeny.m) {
      fprintf(stderr, "HIBA: compare([%f,%f], [%f,%f])\n"
		      "\telvárt eredmény: [%f,%f]\n"
		      "\tkapott eredmény: [%f,%f]\n",
		      testlist[i].a.a, testlist[i].a.m, testlist[i].b.a, testlist[i].b.m,
		      testlist[i].eredmeny.a, testlist[i].eredmeny.m,
		      eredmeny.a, eredmeny.m
      );
    }
  }
#endif
}

void call_2()
{
	char ut[80], *p;
	int eredmeny;
	if(fgets(ut, 80, stdin)==NULL) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	for(p=ut;*p&&*p!=10;p++);
	*p=0;
	eredmeny=tavolsag(ut);
	fprintf(stdout,"%d\n",eredmeny);
}
void test_2()
{
  int i, eredmeny;
  struct {char ut[80]; int eredmeny;} testlist[2] = {
    {"fljb", 0},
    {"fwjslabq", 0}
  };
  for (i = 0; i < 2; ++i) {
    eredmeny = tavolsag(testlist[i].ut);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: tavolsag(\"%s\")\n"
                      "\telvárt eredmény: %d\n"
                      "\tkapott eredmény: %d\n",
              testlist[i].ut, testlist[i].eredmeny, eredmeny);
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
