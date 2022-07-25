#include<stdio.h>
int main()
{
    int N, i, F=1, k;
    scanf("%d", &N);
    if(N>0 && N<13)
    {
        for( i=N; i>0; i-- ){
            F = F*i;
        }
        printf("%d\n", F);
    }
    return 0;
}
