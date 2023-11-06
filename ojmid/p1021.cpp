#include <iostream>
int main()
{
    double n;
    int aux,notes;
    scanf("%lf", &n);
    notes=n*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notes/10000);
    aux = (notes%10000);
    printf("%d nota(s) de R$ 50.00\n", aux/5000);
    aux = (aux%5000);
    printf("%d nota(s) de R$ 20.00\n", aux/2000);
    aux = (aux%2000);
    printf("%d nota(s) de R$ 10.00\n", aux/1000);
    aux = (aux%1000);
    printf("%d nota(s) de R$ 5.00\n", aux/500);
    aux = (aux%500);
    printf("%d nota(s) de R$ 2.00\n", aux/200);
    aux = (aux%200);
    printf ("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", aux/100);
    aux=(aux%100);
    printf ("%d moeda(s) de R$ 0.50\n",aux/50);
    aux=(aux%50);
    printf ("%d moeda(s) de R$ 0.25\n",aux/25);
    aux=(aux%25);
    printf ("%d moeda(s) de R$ 0.10\n",aux/10);
    aux=(aux%10);
    printf ("%d moeda(s) de R$ 0.05\n",aux/5);
    aux=(aux%5);
    printf ("%d moeda(s) de R$ 0.01\n",aux/1);
    return 0;
}