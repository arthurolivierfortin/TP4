#include <stdio.h>


void main(){


    int age;


    printf("Entrez l'age de l'enfant\n");
    scanf("%d", &age);

    if (6 <= age && age<=7){
        printf("Poussin\n");
    }

    if (8 <= age && age<=9){
        printf("Pupille\n");
    }

    if (10 <= age && age<=11){
        printf("Minime\n");
    }
    
    if (12 <= age && age<=15){
        printf("Cadet\n");
    }

    if (16 <= age && age<=18){
        printf("Junior\n");
    }

    if (19 <= age && age<=7){
        printf("Senior\n");
    }

    if (6 > age){
        printf("L'enfant est trop jeune pour être dans une catégorie\n");
    }
    return;
}