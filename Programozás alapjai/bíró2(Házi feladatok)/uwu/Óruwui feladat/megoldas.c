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
1. feladat: TITKOS UZENET (2 pont)
Az UwU kolonia nagyon titokzatos, es egeszen ezidaig nem igazan hallottunk roluk, most azonban megtalaltunk
egy rejtett uzenetet a gyonyoruszep kertunkben, ahol a paradicsomok az egig ernek (de ez most lenyegtelen).
Az alabbi fuggveny feladata, hogy ezt a talalt uzenetet megismetelje, mert mint tudjuk, az ismetles a tudas anyja.
Az uzenet igy szol: "uwwu u wwu uww wuwu". A jelentese jelenleg nem ismert, igy barmi lehet, de persze nem akarmi.
A kiiratas vegen termeszetesen egy sortores is szerepeljen, mert hat sortores nelkul mit erek en?
A fuggveny a jol vegzett munkat egy 0-s ertekkel jelezze, ami nyilvan nem azt jelenti, hogy 0 munkat vegeztunk.
Hat mi vagyunk mi, naplopo informatikusok, akik egesz nap nem csinalnak semmit es csak a szamitot nyomkodjak?

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
*/
int uzenet() {
    printf("uwwu u wwu uww wuwu\n");
    return 0;
}

/*
2. feladat: KOLONIAK (3 pont)
UwU koloniakat talaltunk a kertunk gyonyoruszep gyepjen, osszesen harmat. A koloniakban picike uwu lakaskak
vannak. A kerdes, amit feltettunk magunknak, hogy osszesen mennyi van (a gyanutlan nezelodoben persze felmerulhet
a kerdes, hogy minek maszunk a fuvon negykezlab, mint valami eltevedt halacska... de mi ismerjuk a kuldetesunket
es hiszunk a csodalatos jovoben).
A fuggveny feladata, hogy beolvasson harom egesz szamot a standard inputrol, amelyek megmondjak,
hogy az egyes koloniakban hany picike uwu lakaskakat talaltunk, majd pedig kiirja a standard outputra,
hogy hany picike uwu lakas van osszesen.
A kiiratas formaja az alabbi legyen: "Osszes picike uwu lakaskak szama: <N>.", ahol az <N> helyere az eredmeny
keruljon. Termeszetesen a kiiratast egy soremelessel zarjuk, tovabba jelezzuk az oromteli munka elvegzeset
egy 0-s visszaadott ertekkel.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
*/
int lakohely() {
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);
    printf("Osszes picike uwu lakaskak szama: %d.\n",a+b+c);
    return 0;
}

/*
3. feladat: SPECIALIS (4 pont)
Az UwU koloniak megfigyelese soran azt vettuk eszre, hogy a 3-as szam nagyon nagy szerepet jatszik az uwuk
eleteben, ugyanis minden koloniaban levo picike uwu lakaskak szama 3-ra vegzodott (pl. 3, 13, 23, 33, stb.).
Persze lehet csak mi kepzelodunk a sok futol... akarom mondani a sok maszastol, es amugy semmi osszefugges
nincs, de lassuk be, erre eleg csekelyke esely van, mar nem azert a makadamdioert.
Az alabbi fuggveny ezuttal parameterben var egy erteket, amelyrol el kell dontenie, hogy specialis-e, azaz
3-asra vegzodik-e. Amennyiben specialis szamrol van szo, akkor irjuk ki a standard outputra, hogy "SPECIALIS",
kulonben irjuk ki, hogy "NEM SPECIALIS". A kiiratast nem meglepo modon egy sorvege jellel zarjuk.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek.
*/
void specialis(int ertek) {
    if(ertek % 10 == 3)
        printf("SPECIALIS\n");
    else
        printf("NEM SPECIALIS\n");
}

/*
4. feladat: ZENE (4 pont)
Az UwU kolonia felfedezesere iranyulo expedicionk mar nagyon hosszu ideje tart, mar kezdunk nagyon kifaradni.
De nezzuk a jo oldalat, ezen 5 perc alatt mar rengeteg felfedezest tettunk, amely alapjaiban valtoztathatja meg
az emberi civilizacio mukodeset. Persze ha nem halunk ehen kozben, mert lassuk be, ennek megvan az eselye.
Azonban egyik UwU koloniaban egy erdekes dolgot lattunk. Illetve hogy egeszen pontos legyek (zummognek itt...)
hallottunk. Az egyik picike uwu lakaskabol csodalatos muzsikaszo hallatszik - na persze nem annyira szep, mint a
vasarnapi ebedkor a tevebol, de azert maradjuk annyiban, hogy nem rossz.
A zenere elkezdtunk tancolni a fu kozepen, negykezlabon, mint minden normalis ember tenne ebben a helyzetben.
Sajnos nem volt a kozelben kelta templom, de azert nelkule is egesz jol elvoltunk. Persze kelta templommal
tancolni mindig jobb.
A fuggveny feladata a nyilvanossag szamara elerhetove tenni a zenet, azaz irjon ki annyi ♪ karaktert a kepernyore,
egymas utan, egy sorban, amilyen hosszu a zene (ezt a parameterben erkezo ertek irja le).
A zenet nem massal zarjuk, mint a sorkoz tancolo ritmusaval.

Pelda input: 4
Pelda output: ♪♪♪♪

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek.
*/
void zene(int hossz) {
    for(int i=0; i<hossz; i++)
    {
        printf("♪");
    }
    printf("\n");
}

/*
5. feladat: TAPSIKA (5 pont)
Mint mar korabban emlitettem, valami fenomenalis muzsikanak lehettunk fultanui. Az uwuknak is tetszett az
eloadas, igy annak vegeztevel elkezdtek tapsikolni, mint azok az emberek, akik megtudtak, hogy a szobat
szunyogok szalltak meg. Milyen oromteli pillanatok ezek!
De vissza a produkciora: szeretnenk megszamolni, hogy osszesen hany taps hangzott el.
A fuggveny feladata, hogy beolvasson ertekeket a standard inputrol, amelyek az egyes uwuk altal tapsolt
mennyiseget jelzik, majd meghatarozza, hogy osszesen hany tapsolas tortent.
A szamsorozat veget a -1-es ertek jelzi, ezt termeszetesen nem kell beszamitani.
Pelda input: 6 2 4 -1
Pelda output: 12

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/
int tapsika() {
    int a = 0;
    int tapsSzam = 0;
    do{
        scanf(" %d", &a);
        if(a != -1)
            tapsSzam += a;
    }while(a != -1);

    return tapsSzam;
}

/*
6. feladat: FU (5 pont)
Az uwuk a vilagszinvonalu eloadas utan megeheztek, igy a korabban osszegyujtott fuszalak kore gyultek, hogy
elfogyasszak azokat. Viszont egy fontos kerdes, hogy el tudjak-e osztani igazsagosan.
En, mint igen komoly fu-szakerto mondom, hogy a fuszalakat csak egyben lehet megenni,
tehat egy adott fuszalat muszaj egy uwunak elfogyasztania, nem tudjak elosztani tobben.
Persze tobbet is ehetnek ha ehesek, csak arra kell vigyazni, hogy ne vigyek tulzasba, mert az ki tudja milyen
mellekhatasokkal jarhat (en termeszetesen nem).
A fuggveny parameterben varja, hogy hany fuszal van osszesen, illetve hogy hany uwu van, akik szeretnek
egymas kozott elosztani a fuszalakat. A kerdes, hogy el tudjak-e osztani ugy, hogy mindenkinek ugyanannyi
fuszal jusson. A fuggveny terjen vissza 1-gyel, ha el tudjak igazsagosan osztani, 0-val kulonben.

1. PELDA
input: 12, 3
output: 1
magyarazat: 12 fuszal van es 3 uwu. Mindegyik 4-et eszik, igy el tudjak osztani

2. PELDA
input: 14, 5
output: 0
magyarazat: 14 fuszal van es 5 uwu. Ha mindegyik uwu eszik 2-t, akkor kimarad 4 fuszal.
Azonban 3-at mar nem tud mindenki enni, mert valakinek nem jut (15 kene), tehat nem tudtak igazsagosan elosztani.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/
int igazsagos(int fuszalakSzama, int uwuk) {
    if(uwuk == 0)
        return 1;

    if(fuszalakSzama % uwuk == 0 )
        return 1;
    else
        return 0;
}

/*
7. feladat: CSODALATOS ALLAT (6 pont)
Az uwuk nagyon sokaig lakomaztak, igy kenytelenek voltunk tovabballni... akarom mondani tovabbmaszni, hogy
ujabb erdekessegeket fedezzunk fel a varazslatos kertunkben. Nem kellett sokat masznunk, mikor ujabb erdekessegre
lettunk figyelmesek: egy nagyon kulonleges, gyonyoruszep allatra. Ez egy szurke szinu allat volt, hatalmas
volt a feje, volt ket gyonyoruseges fule, zold szemei es hatalmas remiszto fogai. Aztan meg nyavogott egyet.
Szerencsere senki nem erodalta meg, ez nekunk sem celunk, olyan gaztettre sosem lennenk kepesek - bar azert
hozzateszem a gazokat erdemes lenne a kertbol kiirtani, mert a cseresznyefakra mar nem is tudnak a szazlabuak
felmaszni, de ez most mellekes a kuldetesunk szempontjabol.
Visszaterve a cicara. Ez nem egy hagyomanyos cica volt, hanem egy tundercica, aki kulonleges kodnyelven
beszelt - illetve nyavogott. Ebben a kodnyelvben - mint az kozismert - a hangok ismetlodeset kell figyelnunk,
mert ez alapjan dekodolhatjuk az uzenetet. A tundercica altal mondott szoveg egy adott karakterrel kezdodik,
es azt kell megfigyelnunk, hogy ez a karakter mikor fordul elo legkozelebb a szovegben, es a visszafejtett
kod az ennyiedik betu lesz az ABC-ben. Ezutan folytatjuk a kovetkezo karakterrel.
Pl. "meoowmuwu" - itt az elso betu az 'm' betu, tehat a kovetkezo 'm' betut kell megkeresnunk, ami ettol
5 karakternyi tavolsagra van, tehat ez egy E betu. Az ezt koveto betu az 'u', tehat a kovetkezo 'u' betut keressuk,
ami a szovegben 2 karakternyi tavolsagra talalhato, tehat ez egy B betu, mert az az ABC masodik betuje.
Azaz a tundercicuska altal mondott szo: EB. Valoszinuleg szegeny nagyon megijedt egy kutyatol, de szerencsere
van szarnya, igy el tudott repulni: huss.
A fuggveny feladata, hogy a standard inputrol olvasson be karaktereket (egeszen addig, amig sortorest nem kap),
dekodolja a szoveget, majd pedig kiirja a standard outputra a dekodolt szoveget csupa nagy betukkel.
A kiiratas termeszetesen a tunderi uzenet veget jelzo sorszakadas varazslatos rezgesevel zarul.

Tipp: garantalhato, hogy az inputban mindegyik karakternek megvan a parja, es a par zaro tagja utan kozvetlenul
erkezik a sortores.

Pelda input: akmbkrklckvviakmbjbkqkvllckoiuxjyvkqikkkkkkkkkkbjdjfjezbkwmi
Pelda output: MEOW
magyarazat: eloszor az 'a' betu parjat keressuk, ami 13 karakter tavolsagra van (M), utana a 'k' betu parjat,
ami 5 karakter tavolsagra (E), utana a 'q' betu parjat, ami 15 karakter tavolsagra (O), vegul az 'i' betu parjat,
ami 23 karakter tavolsagra (W).

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
*/
void gyonyoruszep_allat_titkos_kodnyelvenek_visszafejtese() {
    char szo[100];
    int h = 0;
    do {
        scanf("%c", &szo[h]);
        h++;
    }while(szo[h-1]!='\n');
    char a  = 'A';
    int vKB = 0;
    char kB = ' ';
    int hk = 0;
    for(int i=0; i<h; i++)
    {
        if(vKB == 0)
        {
            kB = szo[i];
            vKB = 1;
        }
        else {
            if (szo[i] == kB)
            {

                printf("%c", a + hk);
            vKB = 0;
            hk = 0;
            }
            else
            {
                hk++;
            }
        }
    }
    printf("\n");
}

/*
8. feladat: BUCSU (1 pont)
Gratulalok, szep munka. Mar csak egy feladat var rad. Ne varasd meg, mert az nem kelt jo elso benyomast.
Mar csak egy egyszeru kerdesre kell valaszolni: melyik az a gyumolcs, amelyik egig er a kertunkben?
A fuggveny feladata, hogy kiirja a kepernyore ennek a gyumolcsnek a nevet csupa nagybetuvel,
vegul pedig a sortordeles osi ritualejaval zarjuk vilagszinvonalu munkankat.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
*/
void noveny() {
    printf("PARADICSOM\n");
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
    int check;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvashato adat!\n");
        return;
    }
    if(uzenet() && (check == 'R')) {
        fputs("RETURNS NONZERO", stdout);
    }
}
void test_1()
{
    uzenet();
}

void call_2()
{
    int check;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvashato adat!\n");
        return;
    }
    if(lakohely() && (check == 'R')) {
        fputs("RETURNS NONZERO", stdout);
    }
}
void test_2()
{
    lakohely();
}

void call_3()
{
    int szam;
    if(fscanf(stdin, "%d", &szam) != 1) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    specialis(szam);
}
void test_3()
{
    int i;
    struct {int szam; char eredmeny[15];} testlist[3] = {
            {41413, "SPECIALIS" },
            {52235, "NEM SPECIALIS"},
            {3125423, "SPECIALIS"}
    };
    for (i = 0; i < 3; ++i) {
        fprintf(stdout, "Input: %d, elvart: %s\n", testlist[i].szam, testlist[i].eredmeny);
        specialis(testlist[i].szam);
    }
}

void call_4()
{
    int szam;
    if(fscanf(stdin, "%d", &szam) != 1) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    zene(szam);
}
void test_4()
{
    int i;
    struct {int szam; char eredmeny[50];} testlist[2] = {
            {3, "♪♪♪" },
            {7, "♪♪♪♪♪♪♪"}
    };
    for (i = 0; i < 2; ++i) {
        fprintf(stdout, "Input: %d, elvart: %s\n", testlist[i].szam, testlist[i].eredmeny);
        zene(testlist[i].szam);
    }
}

void call_5()
{
    int check, szam, eredmeny;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    eredmeny = tapsika();
    fprintf(stdout, "%d\n", eredmeny);
}
void test_5()
{
    int eredmeny = tapsika();
    printf("%d\n", eredmeny);
}

void call_6()
{
    int elso, masodik, eredmeny;
    if(fscanf(stdin, "%d %d", &elso, &masodik) != 2) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    eredmeny = igazsagos(elso, masodik);
    fprintf(stdout, "%d\n", eredmeny);
}
void test_6()
{
    int i, eredmeny;
    struct {int szam1; int szam2; int eredmeny;} testlist[2] = {
            {40, 5, 1},
            {77, 8, 0}
    };
    for (i = 0; i < 2; ++i) {
        eredmeny = igazsagos(testlist[i].szam1, testlist[i].szam2);
        if (eredmeny != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA: igazsagos(%d, %d)\n", testlist[i].szam1, testlist[i].szam2);
            fprintf(stderr, "\telvárt eredmény: %d\n", testlist[i].eredmeny);
            fprintf(stderr, "\tkapott eredmény: %d\n", eredmeny);
        }
    }
}

void call_7()
{
    int check;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvashato adat!\n");
        return;
    }

    gyonyoruszep_allat_titkos_kodnyelvenek_visszafejtese();
}
void test_7()
{
    gyonyoruszep_allat_titkos_kodnyelvenek_visszafejtese();
}

void call_8()
{
    int check;
    if((check = fgetc(stdin)) == EOF) {
        fprintf(stderr, "HIBA: Nem olvashato adat!\n");
        return;
    }

    noveny();
}
void test_8()
{
    noveny();
}

typedef void (*call_function)();

call_function call_table[] = {
        call_1,
        call_2,
        call_3,
        call_4,
        call_5,
        call_6,
        call_7,
        call_8,
        NULL
};


call_function test_table[] = {
        test_1,
        test_2,
        test_3,
        test_4,
        test_5,
        test_6,
        test_7,
        test_8,
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
