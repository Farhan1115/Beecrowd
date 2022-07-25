#include<stdio.h>
int main()
{
    int N, X, i, j, k1, k2;
    scanf("%d", &N);
    for( i=1; i<=N; i++ ){
        scanf("%d", &X);
        if( X%1==0 && X%X==0 ){
            for( j=2; j<X; j++ ){
                if( X%j!=0 ){
                    printf("%d", X);
                }
            }
        }
    }
    return 0;
}
