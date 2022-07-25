#include<stdio.h>
int main()
{
    double N, N1, avg;
    for( ; ; ){
            scanf("%lf", &N);
    if( N<0.0 || N>10.0 ){
        printf("nota invalida\n");
    }
    else{
            scanf("%lf", &N1);
    if( N1<0.0 || N1>10.0 )
    {
        printf("nota invalida\n");
        for( ; ; ){
            scanf("%lf", &N1);
            if( N1>=0.0 && N1<=10.0 ){ break; }
            else{ printf("nota invalida\n"); }
        }
    }
    }
    if( N>=0.0 && N<=10.0 && N1>=0.0 && N1<=10.0 ){ break; }
    }
    avg = (N+N1)/2;
    printf("media = %.2lf\n", avg);
    return 0;
}
