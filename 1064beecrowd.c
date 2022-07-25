#include<stdio.h>
int main()
{
    int i, N=0 ;
    double a, sum=0, avg;
    for(i = 1; i<=6 ; i++)
    {
        scanf("%lf", &a);
        if(a>0){ N = N+1; sum = sum + a; }
    }
    printf("%d valores positivos\n",N);
    avg = sum/N;
    printf("%.1lf\n", avg);
    return 0;
}
