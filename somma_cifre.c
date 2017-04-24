#include <stdio.h>

int main(){

<<<<<<< HEAD
int num, somma;
=======
int num;
>>>>>>> d8d367d3393a9484006349bfa529ff9c7fe70f1d
int cifra1, cifra2, cifra3;

printf("Inserisci un numero di tre cifre");
scanf("%d", &num);

if (num<0 ||num>999){
	printf("devi inserire TRE CIFRE");}
else {
<<<<<<< HEAD
	cifra3 = num%10;
	num = num/10;
	cifra2 = num%10;
	num = num/10;
	cifra1 = num%10;
	num = num/10;
}
somma = cifra3 + cifra2 + cifra1;
	printf("La somma tra %d + %d + %d e'%d", cifra1, cifra2, cifra3, somma );
=======
	cifra3 = num % 10;
	num = num / 10;}
	printf("%d", cifra3);
>>>>>>> d8d367d3393a9484006349bfa529ff9c7fe70f1d
return 0; }
	
