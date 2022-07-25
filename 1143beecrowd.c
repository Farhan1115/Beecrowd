#include<stdio.h>
int main()
{
    int N, i, result;
    scanf("%d", &N);
    if(N>1 && N<1000)
    {
        for( i=1; i<=N; i++)
        {
             result = i*i;
             printf("%d %d %d\n", i, result, result*i);
        }
    }
    return 0;
}
