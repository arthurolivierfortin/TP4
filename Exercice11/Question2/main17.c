#include <stdio.h>
#include <math.h>


void main(){

    float h=0.00001, dérivée, x;

    

    printf("Entrez une valeur de x\n");
    scanf("%f", &x);

    float f(float x){
        x = (6*(pow(x,3)) + 9*(pow(x,2)) + 4*x + 6);
        return x;
    }

    dérivée = ((f(x+h)-f(x))/h);
    printf("%s%f%s", "dérivée = ", dérivée, "\n");
    
    
    return;
}