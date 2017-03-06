#include <stdio.h>

int main ()
{

    const double pi = 3.14159;

    int raggio;


    printf("Inserisci il raggio del cerchio ");
    scanf("%d", &raggio);

    double circonferenza  = 2*raggio * pi;
    double area = (raggio * raggio) * pi;

    printf("La circonferenza misura %f\n", circonferenza);
    printf("La sua area e' %f\n", area);

    return 0;
}
