#include <stdio.h>


void main(){


    int U, N, valeur;


    printf("Entrez la valeur de C\n");
    scanf("%d", &U);

    printf("Entrez la valeur de N\n");
    scanf("%d", &N);

    if (N == 0){

        printf("0");
    }

    if (N == 1){

        printf("1");
    }

    if (N == 2){

        printf("2");
    }

    if (N>2){

        valeur = ((4*U)-1 + (5*U)-3);
        printf("%d%s", valeur, "\n");
    }

    return;
}