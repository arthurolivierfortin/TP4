#include <stdio.h>
#include <math.h>


void main(){


    long double h = 0.00000001, fx, fxp, x, dérivée;


    printf("Entrez une valeur de x\n");
    scanf("%Lf", &x);


    long double f(long double x){
        x = (2*x+3)*(3*pow(x,2)+2);
        return x;
    }

    long double fp(long double x){

        x = (18*(x*2+x) + 4);
        return x;
    }

    fx = f(x);
    fxp = fp(x);

    dérivée = ((f(x+h)-f(x))/h);


    printf("%s%Lf%s%Lf%s", "approximation de f'(x) = ", dérivée, " f(x) = ", fxp, "\n");


    return;
}