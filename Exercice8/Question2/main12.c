#include <stdio.h>


void main(){


    int n;
    printf("Donnez moi un entier de 1 à 12\n");
    scanf("%d", &n);

    switch(n){

        case 1:
        case 2:
        case 3:
            printf("Hiver\n");
            break;

        case 4:
        case 5:
        case 6:
            printf("Printemps\n");
            break;

        case 7:
        case 8:
        case 9:
            printf("Été\n");
            break;

        case 10:
        case 11:
        case 12:
            printf("Automne\n");
            break;

        default:
            printf("l'entier ne se situe pas dans l'intervalle [1,12]\n");
            break;
    }
    return;
}