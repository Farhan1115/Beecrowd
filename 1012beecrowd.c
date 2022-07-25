#include<stdio.h>
int main()
{
    double A, B, C, pi=3.14159, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO ,RETANGULO;
    scanf("%lf %lf %lf", &A, &B, &C);
    TRIANGULO = (A*C)/2;
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    CIRCULO = (pi*C*C);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    TRAPEZIO = (((A+B)/2)*C);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    QUADRADO = (B*B);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    RETANGULO = (A*B);
    printf("RETANGULO: %.3lf\n",RETANGULO);
    return 0;
}
