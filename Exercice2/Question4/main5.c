#include <stdio.h>


void main(){

    int nombre, c, len, n, réc=0, i=0, ch;
    
    

    printf("Entrez un nombre entier <= 9999999999\n");
    scanf("%d", &nombre);
    n = nombre;
    ch = nombre;
    //printf("%s%d%s", "ch = ", ch, "\n");

    printf("Entrez C \n");
    scanf("%d", &c);

    while (nombre>0){
        nombre/=10;
        len +=1;

    }
    //printf("%d%s", len, " = len \n");


    for (i=0; (i<len);i++){
        //printf("%s%d%s", "n%10 = ", n%10, "\n");
        if ((n%10) == c){
            réc+=1;
            

        }
        n /=10;
    }

    printf("%s%d%s%d%s%d%s", "récurrence de ", c, " dans ", ch, " = ", réc, "\n" );
    return;
}