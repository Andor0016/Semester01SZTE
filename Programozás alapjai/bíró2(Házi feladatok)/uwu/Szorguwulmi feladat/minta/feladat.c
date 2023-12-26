/***********************************************************************
* A PROGRAMBAN NEM SZEREPELHETNEK AZ ALÁBBI SOROK:
* #include <string.h>
***********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***********************************************************************
************************************************************************
**  ETTŐL A PONTTÓL DOLGOZHATSZ A FELADATOKON
************************************************************************
***********************************************************************/

/*
1. feladat: KALOZHAJOK (4 pont)
Elerkezett az este, egy nagyon kimerito, kalkulussal teli nap utan megerdemlunk egy nyugodt furdozest a
csodaszep furdoszobank furdokadjaban. Azonban ami ezutan tortent, arra senki nem szamitott!
A furdokadat megszalltak kalozok, akik a furdokad hullamzo vizeben hirtelen megjelentek gigantikus kalozhajoikkal.
Mint minden normalis ember, egy ilyen helyzetben elkezdtuk megszamlalni a kalozhajokat a furdokadunkban.
Az alabbi fuggveny parameterben varja, hogy hany kalozhajot szamoltunk. A feladata, hogy kiirja a standard
outputra az alabbi formaban: "Kalozhajok szama: <N>", ahol az <N> helyere a kapott ertek keruljon,
illetve termeszetesen a \n-t se felejtsuk le a szoveg vegerol.
A szamolas nagyon konnyeden ment, ezt a tenyt egy 0-s visszaadott ertekkel jelezhetjuk, ha akarjuk.
Ha nem akarjuk, akkor nem kell, csak ebben az esetben nem fogunk ra pontot kapni, ugyhogy en mindenkeppen
javaslom a jelzeset.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek.
*/
int kalozhajok(int darabszam) {
}

/*
2. feladat: KALOZOK (3 pont)
Amint nezegettuk ezeket a hirtelen megjelent kalozhajokat, arra lettunk figyelmesek, hogy a kalozhajokon
aprocska kalozocskak szaladgalnak. Kiszemeltuk a harom legkozelebbi hajot, es megszamoltuk a rajtuk levo
kalozokat. Ebbol szeretnenk atlagot szamitani, hogy komoly tudomanyos szamitasokat vegezve kideritsuk,
hogy megkozelitoleg osszesen hany kaloz lehet a furdokadunkban.
A fuggveny parameterben var 3 erteket, amelyek leirjak, hogy a harom hajon hany kalozt talaltunk.
A fuggveny feladata, hogy kiirja az outputra a megfigyelesunket az alabbi formaban, 2 kulonbozo sorban:
    A harom legkozelebbi hajon levo kalozok: <a>, <b>, <c> db.
    Az atlagos legenyseg meret: <d>.
A <a>, <b>, <c> helyere keruljon a kapott 3 parameter (megfelelo sorrendben), mig a <d> helyere a kapott
harom ertek atlaga, 2 tizedesjegyre kerekitve.
A kiiratas vegerol nehogy lemaradjon a sortores, mert az leket okozhatna a kalozhajokon, ujjujj.

PELDA
input: 5 7 4
output:
    A harom legkozelebbi hajon levo kalozok: 5, 7, 4 db.
    Az atlagos legenyseg meret: 5.33.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek.
*/
void kalozok(int elso, int masodik, int harmadik) {
}
/*
3. feladat: HAJOZAS (6 pont)
Annyira meglepoek es erdekesek a hirtelen megjelent kalozhajok, hogy gyakorlatilag mar mindent el is felejtettunk.
A csodalatos kalkulust is, a meg csodalatosabb gyakorlatvezetoket, es azt is, hogy amugy furdeni akartunk.
A figyelmunket megragadta a kad kozepen levo hajo. Na nem azert, mert ez annyira kulonbozo lett volna a tobbitol,
vagy a kalozok furabban viselkedtek volna rajta. Ennel sokkal komolyabb indokunk volt arra, hogy az lett a
kivalasztott hajo. Azert, mert az volt a kad kozepen.
A kadra tekinthetunk egy 2 dimenzios terkepkent, ahol az oceanon (azaz a furdokadban) a kalozhajok navigalnak
egyik celpontrol a masikra. Es pont ezt figyeltuk meg, hogy a kivalaszott hajo milyen utvonalat jart be.
A celunk meghatarozni, hogy 1 ora alatt mekkora tavolsagot tett meg a kivalasztott hajo. Kezdetben a (0,0)
koordinatarol indul, majd mindig egyenes vonalban halad a kovetkezo koordinatara.
A fuggveny a standard inputrol olvassa be a koordinataparokat egeszen addig, amig (0, 0) part nem kap meg.
Ezt a (0, 0) part mar nem szamitjuk bele az utvonalba.
A fuggveny szamolja ki es adja vissza ut teljes hosszat, amit a hajo megtett. Minden koordinata egesz szam.

PELDA
input: 4 0 0 4 2 4 0 0
output: 11.66
magyarazat:
    az utvonalnak 3 allomasa van: (4, 0), (0, 4) es (2, 4).
    1. allomas: (4, 0) --> mig ide eljut a hajo a (0, 0) pontbol, addig 4 egysegnyi tavolsagot tesz meg
    2. allomas: (0, 4) --> mig ide eljut a hajo a (4, 0) pontbol, addig ~5.66 egysegnyi tavolsagot tesz meg
    3. allomas: (2, 4) --> mig ide eljut a hajo a (0, 4) pontbol, addig 2 egysegnyi tavolsagot tesz meg
    osszesitett tav: 4 + 5.66 + 2 = 11.66.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny outputja a visszateresi ertek.
*/
float hajozas() {
}

/*
4. feladat: SZORNYEK JAAAAJ (10 pont)
A furdokadban levo kalozoknak am nem csak a haborgo furdovizzel kell megkuzdeniuk, de a veszedelmes vizi szornyekkel
is, amelyek ellepik a furdokadat. Ezek a vizi szornyek igazan hatalmasok, ijeszto tekintetuk van es neha meg
hangokat is adnak ki magukbol. Igen, ilyet a legnagyobb ellensegunknek se kivannank: gumikacsak.
A gumikacsak rettento nagy hatalommal rendelkeznek, amelyet csak igazan muvelt egyenek kepesek visszaverni,
ugyanis a gumikacsak tamadasanak kivedesehez masodfoku egyenleteket kell megoldani.
Es meg azt mondjak ezt a tudast sehol sem hasznosithatjuk. Hat mi lenne velunk ha nem ertenenk hozza, es
ugy lepnek el a furdokadunkat a gumikacsak? Vagy akar ejszaka is meglephetnek almunkban. Ez veszelyes!
A lenyeg, hogy nagyon megkedveltuk a kalozokat, igy szeretnenk oket (illetve magunkat is) megmenteni eme
veszedelmes allatoktol.
Az alabbi fuggveny harom paramtert var, es meg kell oldania az ezen parameterek altal leirt masodfoku egyenletet.
A fuggveny a standard outputra irja ki a ket eredmenyt az alabbi formaban: "<x1>;<x2>", termeszetesen sortoressel
a vegen. Az <x1> es <x2> helyere a ket megoldas keruljon (Az <x1> a kisebb).
Amennyiben csak egy megoldas van, ugy az alabbi formaban irodjon ki: "<x1>".
Az eredmenyeket mindig 2 tizedesjegy pontossaggal irjuk ki.
Ha nincs megoldas, akkor "NINCS MEGOLDAS", mig ha vegtelen megoldas van, akkor a "VEGTELEN MEGOLDAS VAN" szoveg
irodjon ki, termeszetesen a soremeleseket ezuttal se felejtsuk el, mert azokkal tudjuk vegleg elsullyeszteni a
veszedelmes szornyeket.
A fuggveny terjen vissza 0-s ertekkel, amiben sikerult legalabb egy megoldast talalni, (-1)-gyel egyebkent.

PELDA
input: 2, 2, -4
output: -2;1
magyarazat: az egyenlet a 2x^2 + 2x - 4 = 0, amelynek ket megoldasa x1 = -2 es x2 = 1.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
*/
int vedelem(float a, float b, float c) {
}

/*
5. feladat: AGYUGOLYOK (7 pont)
A nagy csataban a kalozok rengeteg agyugolyot lottek ki, hogy ezzel is fenn tudjak tartani a latszatat, hogy
ok gyoztek le a veszedelmes joszagokat. Persze mindannyian tudjuk, hogy ez nem igaz, de a furdoszobatukron
uldogelo siralyokat ezzel a trukkel be tudjak csapni a kalozok. Pedig termeszetesen az osszes agyugolyo
egyszeruen visszapattant a kacsakrol.
A kalandunk utolso szakaszaban arra vagyunk kivancsiak, hogy atlagosan hany agyugolyot lottek ki egy hajorol.
Ez azert fontos, mert ha elmeseljuk a baratainknak, hogy mi tortent velunk furdes kozben, akkor esetleg
nem fognak nekunk hinni, ha nem mondjuk meg nekik ezen fontos adatokat. Hazudni meg nem szeretnenk, szoval
mindenkeppen ki kell szamolnunk.
A fuggveny a standard inputrol eloszor olvasson be ket szamot. Az elso szam jelenti, hogy hany darab hajo van,
mig a masodik azt jelenti, hogy az eredmeny hany tizedesjegy pontossaggal kell visszaszolgaltatnunk.
A fuggveny ezutan olvasson be annyi szamot, ahany hajo van. Ezek a szamok jelentik, hogy az egyes hajokrol hany
agyugolyot lottek ki. Vegul a fuggveny irja ki a standard outputra az atlagot, a megfelelo modon kerekitve, 
termeszetesen egy sortoressel a vegen.

Pelda input: 3 5 22 12 9
Pelda output: 14.33333
Magyarazat:
  Az elso szam azt jelenti, hogy 3 hajo van
  A masodik szam azt jelenti, hogy 5 tizedesjegy pontossaggal kell az eredmenyt kiirni
  A tobbi a kilott agyugolyok szamat jelenti (22, 12, 9), amelyek atlaga 14.333333...

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
*/
void kilott_agyugolyok() {
}

/*
6. feladat: IDO (5 pont)
A hatalmas csata utan a kalozok elhajoztak, a kacsakat elnyelte az aradat (mentek a lefolyoba uj celpontok utan
nezni), igy egyedul maradtunk egy vegre megfurodhettunk. Termeszetesen az orakig tarto, hatalmas kalandok miatt
ez a szokasosnal joval tovabb tartott, egeszen pontosan annak duplaja volt. Az alabbi fuggveny feladata megmondani,
hogy hany percig tartott a furdesunk ezen a kulonleges napon, ha azt tudjuk, hogy altalaban mennyi ideig szokott
tartani.
A fuggveny olvassa be a standard inputrol, hogy hany percig szokott atlagosan tartani a furdes (egesz szam),
majd irja ki a standard outputra, hogy mennyi ideig tartott most a furdes (tehat a beolvasott ertek duplaja).
Most lazadjunk egy kicsit, es a kiiratas vegere ne tegyunk sortorest, menjen a sor a vegtelensegig... aztan
majd szegeny vasarlok napokon keresztul a boltban varakoznak.
Es izeee... van itt meg valami, amit eddig nem mertem elmondani, es nem is tudom hogyan tudnek hozzakezdeni...
Az a helyzet, hogy a nagy kalandok hatasara en nagyon megeheztem... Ah, nem, hagyjuk, inkabb nem mondom el.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
*/
void dupla() {
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
    int check, szam;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvashato adat!\n");
        return;
    }

    if ((fscanf(stdin, "%d", &szam)) != 1) {
        fprintf(stderr, "HIBA: Nem olvashato adat!\n");
        return;
    }

    if(kalozhajok(szam) && (check == 'R')) {
        fputs("RETURNS NONZERO", stdout);
    }
}
void test_1()
{
    int i;
    struct {int szam; char eredmeny[50];} testlist[2] = {
            {5, "Kalozhajok szama: 5" },
            {73573, "Kalozhajok szama: 73573"}
    };
    for (i = 0; i < 2; ++i) {
        fprintf(stdout, "Input: %d, elvart: %s\n", testlist[i].szam, testlist[i].eredmeny);
        kalozhajok(testlist[i].szam);
    }
}

void call_2()
{
    int szam1, szam2, szam3;
    if(fscanf(stdin, "%d %d %d", &szam1, &szam2, &szam3) != 3) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    kalozok(szam1, szam2, szam3);
}
void test_2()
{
    int i;
    struct {int szam1; int szam2; int szam3; char eredmeny[100];} testlist[2] = {
            {3, 4, 5, "A harom legkozelebbi hajon levo kalozok: 3, 4, 5 db.\nAz atlagos legenyseg meret: 4.00." },
            {4, 23, 7, "A harom legkozelebbi hajon levo kalozok: 4, 23, 7 db.\nAz atlagos legenyseg meret: 11.33." }
    };
    for (i = 0; i < 2; ++i) {
        fprintf(stdout, "Input: %d %d %d, elvart:\n%s\n\n", testlist[i].szam1, testlist[i].szam2, testlist[i].szam3, testlist[i].eredmeny);
        kalozok(testlist[i].szam1, testlist[i].szam2, testlist[i].szam3);
    }
}

void call_3()
{
    int check;
    float eredmeny;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    eredmeny = hajozas();
    fprintf(stdout, "%f\n", eredmeny);
}
void test_3()
{
    float result = hajozas();
    fprintf(stdout, "Return value: %f\n", result);
}

void call_4()
{
    int check;
    float szam1, szam2, szam3;
    int result;

    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    if (fscanf(stdin, "%f %f %f", &szam1, &szam2, &szam3) != 3) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    result = vedelem(szam1, szam2, szam3);
    if ((check == 'R')) {
        fprintf(stdout, "return: %d\n", result);
    }
}
void test_4()
{
    int i, eredmeny;
    struct {float szam1; float szam2; float szam3; int ret; char eredmeny[20];} testlist[2] = {
            {2, -9, 4, 0, "0.50;4.00" },
            {0, 2, -4, 0, "2.00" }
    };
    for (i = 0; i < 2; ++i) {
        fprintf(stdout,
                "Input: %f %f %f, elvart:\n%s\n\n",
                testlist[i].szam1, testlist[i].szam2, testlist[i].szam3,
                testlist[i].eredmeny);
        eredmeny = vedelem(testlist[i].szam1, testlist[i].szam2, testlist[i].szam3);
        fprintf(stdout, "Return value: %d\n", eredmeny);
        if (eredmeny != testlist[i].ret) {
            fprintf(stderr, "HIBA: vedelem(%f, %f, %f)\n", testlist[i].szam1, testlist[i].szam2, testlist[i].szam3);
            fprintf(stderr, "\telvárt return value: %d\n", testlist[i].ret);
            fprintf(stderr, "\tkapott return value: %d\n", eredmeny);
        }
    }
}

void call_5()
{
    int check;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    kilott_agyugolyok();
}
void test_5()
{
    kilott_agyugolyok();
}

void call_6()
{
    int check;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    dupla();
}
void test_6()
{
    dupla();
}

typedef void (*call_function)();

call_function call_table[] = {
	call_1,
	call_2,
	call_3,
	call_4,
	call_5,
	call_6,
	NULL
};


call_function test_table[] = {
	test_1,
	test_2,
	test_3,
	test_4,
	test_5,
	test_6,
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
