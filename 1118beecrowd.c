#include<stdio.h>
int main()
{
    double N, N1, Media, X;
        for( ; ; )
    {
        scanf("%lf", &N);
        if( N<0.0 || N>10.0 ){
            printf("nota invalida\n");
        }
        else{
            scanf("%lf", &N1);
            if( N1<0.0 || N1>10.0 ){
                printf("nota invalida\n");
            for( ; ; ){
                scanf("%lf", &N1);
            if( N1>=0.0 && N1<=10.0 ){ break; }
            else{ printf("nota invalida\n"); }
            }
            Media = (N+N1)/2.0;
            printf("media = %.2lf\n", Media);
        }
        else{
           Media = (N+N1)/2.0;
           printf("media = %.2lf\n", Media);
        }
        }
        }
    return 0;
}
