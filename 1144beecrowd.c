#include<stdio.h>
int main()
{
    int N, M, i, j;
    scanf("%d", &N);
    if( N>1 && N<1000){
     for( i=1; i<=N; i++)
    {
        M=i*i;
       printf("%d %d %d\n", i, M, M*i);
       printf("%d %d %d\n", i, M+1, M*i+1);
    }
    }
    return 0;
}
