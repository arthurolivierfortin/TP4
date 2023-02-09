#include <stdio.h>


void main(){


    int a, b, reste, d, ent, stop=0;
    printf("Entrez un entier A \n");
    scanf("%d", &a);
    

    printf("Entrerz un entier B \n");
    scanf("%d", &b);
    reste = a;
    d = b;

    //printf("%d%s", reste, "\n");
    //printf("%d%s", d, "\n");
    while (stop != 1){
        if((reste - d)>0){
            reste-=d;
            ent += 1;
            //printf("%d%s", reste, "reste \n");
        }

        if((reste - d)==0){
            reste-=d;
            ent += 1;
            //printf("%d%s", reste, "reste \n");
        }
        if((reste-d)<=0){
            stop =1;
        }

    }
    if (reste !=0){
        printf("%d%s%d%s%d%s%d%s%d%s", a, "/", b, " = ",  ent, " reste = ", reste, "/", b, "\n");
    }
    if (reste ==0){
        printf("%d%s%d%s%d%s%d%s", a, "/", b, " = ",  ent, " reste = ", 0, "\n");
    }
    return ;
}