#include <stdio.h>

int main(){

int num;
int cifra1, cifra2, cifra3;

printf("Inserisci un numero di tre cifre");
scanf("%d", &num);

if (num<0 ||num>999){
	printf("devi inserire TRE CIFRE");}
else {
	cifra3 = num/10;}
	printf("%d", cifra3);
return 0; }
	
