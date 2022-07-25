#include<stdio.h>
int main()
{
    double A,B,C,k;
    scanf("%lf %lf %lf", &A , &B, &C);
    if(0<A && 0<B && 0<C)
    {
        if (A<B){ k=A; A=B; B=k; }
        if (A<C){ k=A; A=C; C=k; }
        if (B<C){ k=B; B=C; C=k; }
    if( A >= (B+C) )
    {
        printf("NAO FORMA TRIANGULO\n");
    }
     else if( (A*A) == ((B*B + C*C)) )
    {
        printf("TRIANGULO RETANGULO\n");
    }
     else if( (A*A) > ((B*B + C*C)) )
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
     else if( (A*A) < (B*B + C*C) )
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
     if( A==B && B==C )
    {
        printf("TRIANGULO EQUILATERO\n");
    }
     else if( (A==B && A!=C) || (B==C && B!=A) || (C==A && B!=C) )
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
