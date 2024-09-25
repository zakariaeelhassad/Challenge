#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , s;
    printf("entrer le nomber a : ");
    scanf("%d",&a);
    printf("entrer le nomber b : ");
    scanf("%d",&b);
    printf("entrer le nomber c : ");
    scanf("%d",&c);

    s = ((a*2)+(b*3)+(c*5))/10 ;
    printf("la moyenne ponderee de trois nombres : %d",s);
    return 0;
}