#include<stdio.h>
int main()
{
    int c1, n1, c2, n2;
    double p1, p2, Total;
    scanf("%d %d %lf %d %d %lf", &c1, &n1, &p1, &c2, &n2, &p2);
    Total = ((n1*p1)+(n2*p2));
    printf("VALOR A PAGAR: R$ %.2lf\n",Total);
    return 0;
}
