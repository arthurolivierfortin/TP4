#include <stdio.h>

void main(){

    int a, b, i, stop=0, div_c;
    
    

    printf("Entrez A\n");
    scanf("%d", &a);

    printf("Entrex B\n");
    scanf("%d", &b);

    if (a>b){
        i = b;
    }
    if (a<b){
        i = a;
    }

    while ((i>0) && (stop==0)){
        //printf("%s%d%s%d%s", "(a%i)", (a%i), "(b%i)", (b%i), "\n");
        if ((a%i)==0 && (b%i)==0){
            //printf("ici \n");
            div_c = i;
            stop = 1;

            
        }
        i-=1;
    }
    printf("%s%d%s", "plus grand commun diviseur = ", div_c, "\n");


    return;
}