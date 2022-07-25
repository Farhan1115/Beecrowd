#include<stdio.h>
int main()
{
    int V, i, N[10], j;
    scanf("%d", &V);
    if( V<50 ){
         for( i=0; i<10; i++ ){
        printf("N[%d] = %d\n", i, V);
        V = V*2;
    }
    }
    return 0;
}
