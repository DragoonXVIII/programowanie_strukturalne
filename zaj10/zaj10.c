#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>
//#include <vector>



int minimal(int tablica[],size_t dlug)
{
    int minimum;

    for(int i = 0; i<dlug; i++)
    {
        if(i == 0)
            minimum = *(tablica+i);
        if(*(tablica+i)<minimum)
            minimum = *(tablica+i);
    }
    return minimum;
}

float srednia(int tablica1[],size_t dlug)
{

    int wynik = 0;
    int pom = 0;


    for(int j = 0; j < dlug; j++)
    {
    wynik += *(tablica1+j);
    pom++;

    }

    float wynik2;
    wynik2 = (float)wynik/(float)pom;

    return wynik2;
}

int ile_wyst(int tablica[],size_t dlug,int szukana)
{
    int pom = 0;
    for(int i=0;i<dlug;i++)
    {
        if(*(tablica+i)==szukana)
            pom++;
    }
    return pom;
}

void zad10_4()
{

    int N,M;
    float suma,srednia;

    printf("Podaj N: ");
    scanf("%d",&N);
    printf("Podaj M: ");
    scanf("%d",&M);

    float tab[N][M];

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<M; j++)
        {
            printf("Podaj liczbe do wpisania w rzedzie: %d, kolumnie %d",i+1,j+1);
            scanf(" %f",&tab[i][j]);
            suma += tab[i][j];
            srednia++;
        }
        printf("\n");
    }

    for(int x = 0; x<N; x++)
    {
        for(int y = 0; y<M; y++)
        {
            printf("%6.3f, ",tab[x][y]);
        }
        printf("\n");
    }
    srednia = suma/srednia;
    printf("Suma to: %f, srednia to: %f.\n",suma,srednia);

    return;
}



int main()
{

    //10.2
    /*

    int N = 5, iN = N,maxN,sumaN = 0,ilerazyN = 0,szukanyN,
        n,     in    ,maxn,suman = 0,ilerazyn = 0,szukanyn;


    printf("Podaj n: ");
    scanf("%d",&n);

    int tab1[N], tab2[n];



    //N
    printf("Podaj element szukany w tej tablicy: ");
    scanf("%d",&szukanyN);

    for(int i = 0; i<N; i++)
    {
        printf("\npodaj %d element tablicy o stalej dlugosci",(i+1));
        scanf("%d",&tab1[i]);

        if(i == 0)
        maxN = tab1[i];

        if(tab1[i]>maxN)
            maxN = tab1[i];

        sumaN += tab1[i];

        if(tab1[i]==szukanyN)
            ilerazyN++;
    }

    printf("\n=========TAB=========\n");
    for(int iN = 0; iN<N; iN++)
    {
        printf("%d, ",tab1[iN]);
    }
    printf("\n=========TAB=========\n");
    printf("maxymalny element to: %d\n",maxN);
    printf("suma to: %d\n",sumaN);
    printf("ilosc wystapien szukanego elementu to: %d\n",ilerazyN);

    printf("\n===================\n");




    //n
    printf("Podaj elemnet szukany w tej tablicy: ");
    scanf("%d",&szukanyn);

    for(int j = 0; j<n; j++)
    {
        printf("\npodaj %d element tablicy o zmiennej dlugosci",(j+1));
        scanf(" %d",&tab2[j]);

        if(j == 0)
        maxn = tab2[j];

        if(tab2[j]>maxn)
            maxn= tab2[j];

        suman += tab2[j];

        if(tab2[j]==szukanyn)
            ilerazyn++;
    }



    printf("\n=========TAB=========\n");
    for(int jn = 0; jn<n; jn++)
    {
        printf("%d, ",tab2[jn]);
    }
    printf("\n=========TAB=========\n");
    printf("maxymalny element to: %d\n",maxn);
    printf("suma to: %d\n",suman);
    printf("ilosc wystapien szukanego elementu to: %d\n",ilerazyn);

    printf("\n===================\n");
    */

    //10.3

    /*
    time_t t;

    srand((unsigned) time(&t));

    int n,a,b;

    printf("podaj n: ");
    scanf("%d",&n);

    printf("podaj b(szukana): ");
    scanf("%d",&b);

    int tab3[5] = {5,2,3,4,1},
        tab4[4] = {9,7,8,6},
        tab5[n];

    for(int i = 0; i<n; i++)
    {
        *(tab5 + i) = rand()%9;
        printf("%d\n",tab5[i]);
    }

    size_t t3 = sizeof(tab3) / sizeof(tab3[0]);
    size_t t4 = sizeof(tab4) / sizeof(tab4[0]);
    size_t t5 = sizeof(tab5) / sizeof(tab5[0]);

    printf("minimum z tablicy3 to: %d\n",minimal(tab3,t3));
    printf("minimum z tablicy4 to: %d\n",minimal(tab4,t4));
    printf("minimum z tablicy5 to: %d\n",minimal(tab5,t5));

    printf("srednia z tablicy3 to: %f\n",srednia(tab3,t3));
    printf("srednia z tablicy4 to: %f\n",srednia(tab4,t4));
    printf("srednia z tablicy5 to: %f\n",srednia(tab5,t5));

    printf("ilosc wystapien elementu z tablicy3 to: %d\n",ile_wyst(tab3,t3,b));
    printf("ilosc wystapien elementu z tablicy4 to: %d\n",ile_wyst(tab4,t4,b));
    printf("ilosc wystapien elementu z tablicy5 to: %d\n",ile_wyst(tab5,t5,b));

    */

    zad10_4();

    return 0;
}
