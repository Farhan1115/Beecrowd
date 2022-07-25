#include<stdio.h>
int main()
{
    int N, X, i, j, sum=0;
    scanf("%d", &N);
    if( N>=1 && N<=100 ){
        for( i=1; i<=N; i++ ){
            scanf("%d", &X);
            for( j=1; j<X; j++ ){
              if( X%j==0 ){
                sum = sum+j;
              }
            }
            if( sum==X ){
                printf("%d eh perfeito\n", X);
            }
            else if( sum!=X ){
                printf("%d nao eh perfeito\n", X);
            }
            sum = 0;
        }
    }
    return 0;
}
