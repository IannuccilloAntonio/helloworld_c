#include <stdio.h>

int main(){
    int num1;
    int num2;
    int somma=0;
    int differenza=0;
    int divisione=0;
    int moltiplicazione=0;
    printf("inserisci il primo numero\n");
    scanf("%d",&num1);
    printf("inserisci il secondo numero\n");
    scanf("%d",&num2);

    somma = num1+num2;
    differenza = num1-num2;
    moltiplicazione = num1*num2;
    divisione = num1/num2;
   	
    printf("La somma e' %d\n", somma);
    printf("La differenza e' %d\n", differenza);
    printf("La moltiplicazione e' %d\n", moltiplicazione);	    
    printf("La divisione e' %d\n", divisione);

 return 0;
} 
 


