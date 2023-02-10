#include <stdio.h>
#include <math.h>


void main(){

    int y, stop=0, x=1;
    printf("Entrez la valeur de x\n");
    scanf("%d", &x);


    //6y^3 + 4y + 9y^2 + 6
    //6y^3 + 9y^2 + 4y + 6

    y = (6*(pow(x,3)) + 9*(pow(x,2)) + 4*x + 6);
    printf("%s%d%s", "y = ", y, "\n");


    return;
}