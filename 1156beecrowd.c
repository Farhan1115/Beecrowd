#include<stdio.h>
int main()
{
    int i;
    double S, Sum=0.0, X=1.0;
    for( i=1; i<=39; i+=2 ){
            S = i/X;
            X = X*2;
            Sum = Sum+S;
    }
    printf("%.2lf\n", Sum);
    return 0;
}
