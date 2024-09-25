#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur , largeur , s;
    printf("entrer la longueur de rectangle: ");
    scanf("%f",&longueur);
    printf("entrer la largeur de rectangle: ");
    scanf("%f",&largeur);

    s = longueur * largeur ;
    printf("la moyenne ponderee de trois nombres : %.2f",s);
    return 0;
}