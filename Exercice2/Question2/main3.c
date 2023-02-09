#include <stdio.h>


void main(){

    int n, i, j;
    printf("Combien de chiffres voulez-vous entrer?\n");
    scanf("%d", &n);
    int str[n], min, max;


    for (i=0; i<(n);i++){
        printf("%s%d%s", "Entrez votre chiffre no. ", i, "\n");
        scanf("%d", &str[i]);


    }

    for (j=0; j<(n);j++){
        if (j == 0){
            min = str[j];
        }
        if (str[j]<min){
            min = str[j];
        }
        if (str[j]>max){
            max = str[j];
        }
    }
    printf("%s%d%s%d%s", "min = ", min, " max = ", max, "\n");
    return;
}