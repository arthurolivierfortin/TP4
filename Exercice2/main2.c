#include <stdio.h>
#include <ctype.h>


void main(){

    char phr[20];
    int stop = 0, i=0, maj=0, min=0;

    printf("entrez une chaine de caratère en la finissant avec # \n");
    scanf("%s", phr);

    while (stop != 1){
        if (phr[i] == ('#')){
            stop =1;

        }
        if(phr[i] != '#'){
            if(isupper(phr[i])){
                maj +=1;
                //printf("xxx \n");
            }
            
            else{
                min +=1;

            }
        }
        //printf("yyy\n");

        
        //printf("www\n");
        i+=1;
    }
    printf("%s%d%s%d%s", "maj = ",maj, " min = ", min, "\n");
    return;
}