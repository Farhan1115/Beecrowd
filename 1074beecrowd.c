#include<stdio.h>
int main()
{
    int N, i, a;
    scanf("%d", &N);
        if( N<10000 ){
            for( i=0; i<N; i++ ){
                scanf("%d", &a);
             if( a==0 ){
        printf("NULL\n");
    }
    if( a>0 && a%2!=0 ){
        printf("ODD POSITIVE\n");
    }
    if( a<0 && a%2!=0 ){
        printf("ODD NEGATIVE\n");
    }
    if( a>0 && a%2==0 ){
        printf("EVEN POSITIVE\n");
    }
    if( a<0 && a%2==0 ){
        printf("EVEN NEGATIVE\n");
    }
    }
        }
    return 0;
}
