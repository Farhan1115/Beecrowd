#include<stdio.h>
int main()
{
    int N, i, j, X, Y, sum=0, a=0;
    scanf("%d", &N);
    for( i=1; i<=N; i++ )
    {
        scanf("%d %d", &X, &Y);
        if(X<Y){
                sum=0;
            for( j=X+1; j<Y; j++ ){
                if( j%2!=0 ){
                    sum = sum+j;
                }
            }
            printf("%d\n", sum);
        }
          else if(Y<X){
              sum=0;
            for( j=Y+1; j<X; j++ ){
                if( j%2!=0 ){
                    sum = sum+j;
                }
            }
        printf("%d\n", sum);
        }
        else if( X==Y ){
            printf("%d\n", a);
        }
    }
    return 0;
}
