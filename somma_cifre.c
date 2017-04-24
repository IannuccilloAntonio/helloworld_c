#include <stdio.h>

int main()
	
int num, somma;

int cifra1, cifra2, cifra3;

printf("Inserisci un numero di tre cifre");
scanf("%d", &num);

if (num<0 ||num>999){
	printf("devi inserire TRE CIFRE");}
else {

	cifra3 = num%10;
	num = num/10;
	cifra2 = num%10;
	num = num/10;
	cifra1 = num%10;
	num = num/10;
}
somma = cifra3 + cifra2 + cifra1;
	printf("La somma tra %d + %d + %d e'%d", cifra1, cifra2, cifra3, somma );

return 0; }
	
