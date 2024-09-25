#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1 , y1 , z1 , x2 , y2 , z2 ;
    float s ;
    printf("entrez le coordonnées du premier point (x1, y1, z1) :");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("entrez le coordonnées du premier point (x2, y2, z2) :");
    scanf("%f %f %f",&x2,&y2,&z2);

    float m1 = pow((x2-x1),2) ;
    float m2 = pow((y2-y1),2) ;
    float m3 = pow((z2-z1),2) ;
    s = sqrt(m1 + m2 + m3);
    printf("la distance entre deux points donnés dans un espace 3D : %.2f",s);
    return 0;
}