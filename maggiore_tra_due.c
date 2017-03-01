#include <stdio.h>

int main() {
    int n1;
    int n2;

    printf("Inserisci il primo numero ");
    scanf("%d", &n1);

    printf("Inserisci il secondo numero ");
    scanf("%d", &n2);

    if (n1==n2){
      printf("i numeri sono uguali\n");
    }
    else if (n1>n2){
      printf("Il maggiore e' a: %d\n", n1);
    }
    else{	   
   	printf("Il maggiore è b:  %d\n", n2);
    }

return 0;
	}
