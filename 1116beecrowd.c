#include<stdio.h>
int main()
{
    int N, X, Y, i;
    double a, b, result;
    scanf("%d", &N);
    for( i=1; i<=N; i++)
    {
        scanf("%d %d", &X, &Y);
        if(Y!=0)
        {
            a=X;
            b=Y;
            result = a/b;
            printf("%.1lf\n", result);
        }
        else{
            printf("divisao impossivel\n");
        }
    }
    return 0;
}
