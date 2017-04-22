#include <stdio.h>

int main(){

int n1,n2,n3,n4,n5;
int max;

printf("primo numero  ");
scanf("%d", &n1);
printf("secondo numero  ");
scanf("%d", &n2);
printf("terzo numero  ");
scanf("%d", &n3);
printf("quarto numero  ");
scanf("%d", &n4);
printf("quinto numero  ");
scanf("%d", &n5);

max = n1;
if (n2>max) {
	max = n2;}
if (n3>max){
	max = n3;}
if (n4>max ) {
        max = n4;}
if (n5>max){
        max = n5;}
printf("%d", max);
return 0;
}
