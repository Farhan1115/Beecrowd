#include<stdio.h>
int main()
{
    int i, even = 0, odd = 0, pos = 0, neg = 0, a;
    for( i = 1 ; i<6; i++ )
    {
        scanf("%d", &a);
       if( a%2 == 0){even = even + 1; }
       if( a%2 != 0 && a!= 0 ){ odd = odd + 1; }
       if( a>0 ){ pos = pos + 1; }
       if( a<0 ){ neg = neg + 1; }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
