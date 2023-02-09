#include <stdio.h>
#include <math.h>


void main(){

    int a, b, c;
    float x_p, x_n;

    printf("Entrez la valeur de a\n");
    scanf("%d", &a);

    printf("Entrez la valeur de b\n");
    scanf("%d", &b);
    
    printf("Entrez la valeur de c\n");
    scanf("%d", &c);

    if (((pow(b,2))-(4*a*c))>0){
        x_p = ((-b)+sqrt((pow(b,2))-(4*a*c)))/(2*a);
        x_n = ((-b)-sqrt((pow(b,2))-(4*a*c)))/(2*a);

        printf("%s%f%s%f%s", "x1 = ", x_p, " x2 = ", x_n, "\n");
    }

    else{
        printf("Il n'existe pas de solution possible\n");
    }

    

    return;
}