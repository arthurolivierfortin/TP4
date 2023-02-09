#include <stdio.h>


void main(){


    int note, stop=0, nmb_etu;
    float moyenne, somme;

    while(stop==0){
        printf("Entrez une note\n");
        scanf("%d", &note);
        if (note == -1){
            stop = 1;
        }
        else{
            somme+=note;
            nmb_etu+=1;
        }
        

    }
    moyenne = (somme/nmb_etu);
    printf("%s%d%s%f%s","La moyenne des notes des ", nmb_etu, " étudiants = ", moyenne, "\n");
    
    return;
}