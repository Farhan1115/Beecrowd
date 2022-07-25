#include<stdio.h>
int main()
{
    int X, Y, i, j;
    scanf("%d %d", &X, &Y);
    if( X>1 && X<20 && X<Y && Y<100000 ){
        for( i=1; i<=Y; i+=X ){
                for( j=1; j<X; j++ ){
                    printf("%d ", i);
                    i++;
                }
                printf("%d\n", i);
                i=i-X+1;
        }
    }
    return 0;
}
