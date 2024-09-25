#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kh , ms;
    printf("entrer  la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f",&kh);
    ms = kh * 0.27778 ;
    printf("la transforme en mètres par seconde (m/s) et : %.2f",ms);
    return 0;
}