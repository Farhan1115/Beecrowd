#include<stdio.h>
int main()
{
    int A, N, i, sum=0;
    scanf("%d %d", &A, &N);
    if( N<0 || N==0 )
    {
        for( ; ; ){
            scanf("%d", &N);
            if(N>0){    break;  }
        }
        for( i=1; i<=N; i++ ){
            sum = sum+A;
            A++;
        }
        printf("%d\n", sum);
    }
    else{
        for( i=1; i<=N; i++ ){
            sum = sum+A;
            A++;
        }
        printf("%d\n", sum);
    }
    return 0;
}
