#include<stdio.h>
int main()
{
    int N, i, a, Total=0;
    char b;
    scanf("%d", &N);
    for( i=1; i<=N; i++ ){
        scanf("%d %c", &a, &b);
        Total = Total+a;
    }
    printf("Total: %d cobaias\n", Total);
    return 0;
}
