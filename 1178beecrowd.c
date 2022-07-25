#include<stdio.h>
int main()
{
    int i;
    double X, N[100];
    scanf("%lf", &X);
    for( i=0; i<100; i++ ){
        N[i] = X;
        printf("N[%d] = %.4lf\n", i, N[i]);
        X = N[i]/2;
    }
    return 0;
}
