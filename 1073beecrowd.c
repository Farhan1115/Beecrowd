#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N>5 && N<2000)
    {
        int i, result;
        for(i = 2; i<=N ; i=i+2){
            result = i*i;
            printf("%d^2 = %d\n", i, result);
        }
    }
    return 0;
}
