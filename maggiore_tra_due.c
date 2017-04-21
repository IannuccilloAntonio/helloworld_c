#include <stdio.h>

int main() {
    int n1;
    int n2;
    int max;
    printf("Inserisci il primo numero ");
    scanf("%d", &n1);

    printf("Inserisci il secondo numero ");
    scanf("%d", &n2);
     max=n1;
    if (n2>max){
      max=n2;}
	printf("%d", max);
	
return 0;
	}
