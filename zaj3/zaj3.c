#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define STUDENT "student"
#define SREDNIA 4.5

int main()
    {
//zad 3.3
/*
    setlocale(LC_ALL,"");

    char imie[20];
    char nazwisko[20];
    char plec[20];

    scanf("%s",imie);
    scanf("%s",nazwisko);
    scanf("%s",plec);

    printf("%s",imie);
    printf("%s",nazwisko);
    printf("%s",plec);
    printf("%s",STUDENT);
    printf("%f",SREDNIA);
*/
// 3.4
/*
    int a,b,c,h,r,ppp,op;
    float pb,ob,pi=3.14,ppw,ow;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&h);
    scanf("%d",&r);

    ppp = a*b*2+a*c*2+b*c*2;
    op = a*b*c;
    ppw = 2*pi*r*h;
    ow = pi*(pow(r,2))*h;

    printf("%d\n",ppp);
    printf("%d\n",op);
    printf("%f\n",ppw);
    printf("%f\n",ow);
*/
//3.5
/*
    int x,y;
    float srednia_arytmetyczna,srednia_geometryczna;

    scanf("%d",&x);
    scanf("%d",&y);

    srednia_arytmetyczna = (x+y)/2;
    srednia_geometryczna = sqrt(x*y);

    printf("%f",srednia_arytmetyczna);
    printf("%f",srednia_geometryczna);
*/
//3.6
/*
    int pom0,pom;
    float pom2;
    long int pom3;

    printf(" 1 - mile na km \n 2 - km na mile \n 3 - konie mech na waty \n 4 - km/h na m/s \n 5 - F to C\n");

    scanf("%d",&pom0);
    scanf("%d",&pom);

    switch(pom0)
    {
    case 1: //mila = 0,625 km
        pom2 = pom*0.625;
        printf("%f",pom2);
        break;

    case 2:
        pom2 = pom*1.6;
        printf("%f",pom2);
        break;

    case 3:
        pom3 = pom*735;
        printf("%ld",pom3);
        break;

    case 4:
        pom2 = pom*0.28;
        printf("%f",pom2);
        break;

    case 5:
        pom2 = (pom-32)*5/9;
        printf("%f",pom2);
        break;
    }
*/
//3.7
/*
    int wiekl,wiekm,czas,ile_lat,ile_mies;

    scanf("%d",&wiekl);
    scanf("%d",&wiekm);
    scanf("%d",&czas); //miesiace!

    ile_lat = czas/12;
    ile_mies = czas%12;

    ile_lat+=wiekl;
    ile_mies+=wiekm;

    if(ile_mies>=12)
    {
    ile_mies-=12;
    ile_lat++;
    }

    printf("%d\n",ile_lat);
    printf("%d\n",ile_mies);
*/

    return 0;
    }

