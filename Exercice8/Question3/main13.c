#include <stdio.h>


void main(){

    char nom[20];
    int pos;
    


    printf("Entrez le nom du joueurs\n");
    scanf("%s", nom);

    printf("Entrez la position du joueur\n");
    scanf("%d", &pos);

    switch(pos){

        case 1:
            printf("%s%s", nom, " a reçu la médaille d'or\n");
            break;
        case 2:
            printf("%s%s", nom, " a reçu la médaille d'argent\n");
            break;
        case 3:
            printf("%s%s", nom, " a reçu la médaille de bronze\n");
            break;
        default:
            printf("%s%s", nom, " n'a pas reçu de médaille");
            break;
    }
    return;
}