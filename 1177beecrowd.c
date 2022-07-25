#include<stdio.h>
int main()
{
    int N[1000], T, i, j;
    scanf("%d", &T);
    if( T>=2 && T<=50 ){
        for( i=0; i<1000; i++ ){
            for( j=0; j<T; j++ ){
                printf("N[%d] = %d\n", i, j);
            }
        }
    }
    return 0;
}
