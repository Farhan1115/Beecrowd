#include<stdio.h>
int main()
{
    int X, i, N;
    for( ; ; ){
            scanf("%d", &X);
    if( X>0 ){
            for( i=1; i<X; i++ ){
                printf("%d ", i);
            }
            printf("%d\n", X);
    }
    else if( X==0 ){
            printf("");
        break;
    }
    }
    return 0;
}
