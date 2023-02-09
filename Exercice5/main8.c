#include <stdio.h>


void main(){


    int n, inv, l=1, j;

    printf("Donnez-moi un entier\n");
    scanf("%d", &n);

    while (n>0){
        //printf("%s%d%s%d%s", "n", n, "l", l, "\n");
        if (l==1){
            //printf("%s%s%s%s", (n-1)*" ", "@", (n-1)*" ", "\n");
            printf("[");
            for (j=0; j<(n-1);j++){
                printf(" ");
            }
            printf("@");
            for (j=0; j<(n-1);j++){
                printf(" ");
            }
            printf("]");
            printf("\n");
            
            
        }

        else{
            //printf("xxx");
            //printf("", (n-1)*" ","@", "*", "**"*(l-2), "@", (n-1)*" ", "\n");
            printf("[");
            for (j=0; j<(n-1);j++){
                printf(" ");
            }
            printf("@");
            printf("*");
            for (j=0; j<(l-2);j++){
                printf("**");
            }
            printf("@");
            for (j=0; j<(n-1);j++){
                printf(" ");
            }
            printf("]");
            printf("\n");
        }
        n-=1;
        l+=1;
   

    }
    return;
}