#include <stdio.h>


void main(){


    printf("Combien de chiffres voulez-vous entrer?");
    scanf("%d", &n);
    int str[n], min, max;


    for (i=0; i<(n+1)){
        printf("%s%d%s", "Entrez votre chiffre", n, "\n");
        scanf("d", str[i]);

    }

    for (j=0; j<(n+1)){
        if (str[j]<min){
            min = str[j]
        }
        if (str[j>max]){
            max = str[j]
        }
    }
    print("%s%d%s%d%s", "min = ", min, "max = ", max, "\n");
    return;
}