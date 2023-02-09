#include <stdio.h>


void main(){

    int poids, ajustement;
    float prix;

    printf("Entrez votre poids\n");
    scanf("%d", &poids);

    if (poids>0 && poids<=20){

        printf("%s%d%s", "Pour un poids de ", poids, "g le coût est de 2.5$\n");
    }
    
    if (poids>=21 && poids<=50){

        printf("%s%d%s", "Pour un poids de ", poids, "g le coût est de 4.0$\n");
    }
    
    if (poids>=51 && poids<=100){

        printf("%s%d%s", "Pour un poids de ", poids, "g le coût est de 5.0$\n");
    }
    
    if (poids>100){

        ajustement = ((poids-100)/100);
        prix = (5.0 + (ajustement*1.5));
        printf("%s%d%s%f%s", "Pour un poids de ", poids, "g le coût est de ", prix, "$\n");
    }


    return;
}