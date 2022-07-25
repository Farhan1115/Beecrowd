#include<stdio.h>
int main()
{
    int i, j, N, X, Y, sum=0;
    scanf("%d", &N);
    for( i=1; i<=N; i++ ){
            sum = 0;
        scanf("%d %d", &X, &Y);
        for( j=X; j<=X+(Y*2)-1; j++ ){
            if(j%2!=0 ){
                sum = sum + j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
