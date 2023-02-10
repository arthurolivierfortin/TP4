#include <stdio.h>
#include <math.h>


//Exercice 1

void ex1 (){

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

//Exercice 2 - Question 1


void ex2q1(){

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

//Exercice 2 - Question2


void ex2q2(){

    int n, i, j;
    printf("Combien de chiffres voulez-vous entrer?\n");
    scanf("%d", &n);
    int str[n], min, max;


    for (i=0; i<(n);i++){
        printf("%s%d%s", "Entrez votre chiffre no. ", i, "\n");
        scanf("%d", &str[i]);


    }

    for (j=0; j<(n);j++){
        if (j == 0){
            min = str[j];
        }
        if (str[j]<min){
            min = str[j];
        }
        if (str[j]>max){
            max = str[j];
        }
    }
    printf("%s%d%s%d%s", "min = ", min, " max = ", max, "\n");
    return;
}

// Exercice 2 - Question 3


void ex2q3(){


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


//Exercice 2 - Question 4


void ex2q4(){

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


// Exercice 3


void ex3(){

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


// Exercice 4

void ex4(){

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


// Exercice 5


void ex5(){


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

// Exercice 6


void ex6(){


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


// Exercice 7


void ex7(){

    int a, b, c;
    float x_p, x_n;

    printf("Entrez la valeur de a\n");
    scanf("%d", &a);

    printf("Entrez la valeur de b\n");
    scanf("%d", &b);
    
    printf("Entrez la valeur de c\n");
    scanf("%d", &c);

    if (((pow(b,2))-(4*a*c))>0){
        x_p = ((-b)+sqrt((pow(b,2))-(4*a*c)))/(2*a);
        x_n = ((-b)-sqrt((pow(b,2))-(4*a*c)))/(2*a);

        printf("%s%f%s%f%s", "x1 = ", x_p, " x2 = ", x_n, "\n");
    }

    else{
        printf("Il n'existe pas de solution possible\n");
    }

    

    return;
}

// Exercice 8 - Question 1


void ex8q1(){

    int mois;
    printf("Entrez un entier de 1 à 12\n");
    scanf("%d", &mois);

    switch(mois){

        case 1:
            printf("Janvier\n");
            break;
        case 2:
            printf("Février\n");
            break;

        case 3:
            printf("Mars\n");
            break;
        
        case 4:
            printf("Avril\n");
            break;
        
        case 5:
            printf("Mai\n");
            break;
            
        case 6:
            printf("Juin\n");
            break;

        case 7:
            printf("Juillet\n");
            break;

        case 8:
            printf("Août\n");
            break;

        case 9:
            printf("Septembre\n");
            break;
        
        case 10:
            printf("Octobre\n");
            break;
        
        case 11:
            printf("Novembre\n");
            break;
            
        case 12:
            printf("Décembre\n");
            break;

        default:
            printf("l'entier ne se situe pas dans l'intervalle [1,12]\n");
            break;
    }

    return;
}

// Exercice 8 - Question 2


void ex8q2 (){


    int n;
    printf("Donnez moi un entier de 1 à 12\n");
    scanf("%d", &n);

    switch(n){

        case 1:
        case 2:
        case 3:
            printf("Hiver\n");
            break;

        case 4:
        case 5:
        case 6:
            printf("Printemps\n");
            break;

        case 7:
        case 8:
        case 9:
            printf("Été\n");
            break;

        case 10:
        case 11:
        case 12:
            printf("Automne\n");
            break;

        default:
            printf("l'entier ne se situe pas dans l'intervalle [1,12]\n");
            break;
    }
    return;
}


//Exericice 8 - Question 3


void ex8q3(){

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


// Exercice 9


void ex9(){


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


// Exercice 10



void ex10(){


    int U, N, valeur;


    printf("Entrez la valeur de C\n");
    scanf("%d", &U);

    printf("Entrez la valeur de N\n");
    scanf("%d", &N);

    if (N == 0){

        printf("0");
    }

    if (N == 1){

        printf("1");
    }

    if (N == 2){

        printf("2");
    }

    if (N>2){

        valeur = ((4*U)-1 + (5*U)-3);
        printf("%d%s", valeur, "\n");
    }

    return;
}


// Exercice11 - Question 1


void ex11q1(){

    int y, stop=0, x=1;
    printf("Entrez la valeur de x\n");
    scanf("%d", &x);


    //6y^3 + 4y + 9y^2 + 6
    //6y^3 + 9y^2 + 4y + 6

    y = (6*(pow(x,3)) + 9*(pow(x,2)) + 4*x + 6);
    printf("%s%d%s", "y = ", y, "\n");


    return;
}


// Exercice 11 - Question 2


void ex11q2(){

    float h=0.00001, dérivée, x;

    

    printf("Entrez une valeur de x\n");
    scanf("%f", &x);

    float f(float x){
        x = (6*(pow(x,3)) + 9*(pow(x,2)) + 4*x + 6);
        return x;
    }

    dérivée = ((f(x+h)-f(x))/h);
    printf("%s%f%s", "dérivée = ", dérivée, "\n");
    
    
    return;
}


// Exercice 11 - Question 3


void ex11q3(){


    long double h = 0.00000001, fx, fxp, x, dérivée;


    printf("Entrez une valeur de x\n");
    scanf("%Lf", &x);


    long double f(long double x){
        x = (2*x+3)*(3*pow(x,2)+2);
        return x;
    }

    long double fp(long double x){

        x = (18*(x*2+x) + 4);
        return x;
    }

    fx = f(x);
    fxp = fp(x);

    dérivée = ((f(x+h)-f(x))/h);


    printf("%s%Lf%s%Lf%s", "approximation de f'(x) = ", dérivée, " f(x) = ", fxp, "\n");


    return;
}

// L'approximation est seulement bonne pour x = 2