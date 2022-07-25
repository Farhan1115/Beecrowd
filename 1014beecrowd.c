#include<stdio.h>
int main()
{
    int X;
    double Y,ans;
    scanf("%d %lf", &X, &Y);
    ans = X/Y;
    printf("%.3lf km/l\n",ans);
    return 0;
}
