#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main (){

    int a, b=-1, n, sum, inv, s, k, l=0;

    printf("Entrez un chiffre \n");
    scanf("%d", &n);
    s = n;

    while (n>0){
        a = n%10;
        sum=sum+a;
        n /= 10;
        //printf("%d%s", a, "\n");
        b+=1;
    
    
    }

    //printf("%d%s", b, "\n");
    //printf("%d%s", s, "\n");
    while (s>0){
        k = s%10;
        s /= 10;
        //printf("%d%s", k, "k \n");
        //printf("%d%s", b, "b \n");
        l += k*( pow (10,b));
        //printf("%d%s", l, "l \n");
        inv += l;
        b-=1;

    }
    printf("%s%d%s%d%s", "somme =", sum, "  inverse =", l, "\n");
    return;
}