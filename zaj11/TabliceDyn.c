#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "TabliceDyn.h"



//Tutaj definiujesz funkcje do wykorzystania w mainie, do poprawnego dzia³ania potrzebny plik TabliceDyn.h

// rand
void losuj(int *tab, int n, int a, int b)
{
    srand( time( NULL ) );

    for(int i = 0; i<n; i++)
    {
    *(tab+n) = rand()%b;
    printf("%d, ",(tab+n));

    }
    return;
}

// 1 - dimension
float *new_tab_1D(int n)
{

    float *tab = (float*) malloc(n *sizeof(float));

    if(tab==NULL)
    {
        printf("memory error\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i<n; i++)
    {
        printf("Podaj %d liczbe w tabeli: ", i+1);
        scanf("%f", tab+i);
    }

return tab;
}

//2 - dimnesions
float *new_tab_2D(int n,int m)
{

    float *tab = (float*) malloc(n*m *sizeof(float));

    if(tab==NULL)
    {
        printf("memory error\n");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i<n; i++) //wiersze
    {
        for(int j = 0; j<m; j++)//kolumny
        {
            printf("\nPodaj wartosc dla komorki: %dx%d \n",i+1,j+1);
            scanf("%f",(tab+j+(i*m)));
        }
        printf("\n");
    }

return tab;
}

// PRINT
void print_tab(float *tab, int m, int n)
{
    for(int i = 0; i<n; i++) //wiersze
    {
        for(int j = 0; j<m; j++)//kolumny
        {
            printf("%f, ",*(tab+j+i*m));
        }
        printf("\n");
    }

    return;
}

void print_tab_d(int *tab, int m, int n)
{
    for(int i = 0; i<n; i++) //wiersze
    {
        for(int j = 0; j<m; j++)//kolumny
        {
            printf("%d, ",*(tab+j+i*m));
        }
        printf("\n");
    }

    return;
}

// DELETE
void delete_tab(float *tab)
{
    free(tab);
    tab = 0;

    return;
}
