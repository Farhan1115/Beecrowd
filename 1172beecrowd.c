#include<stdio.h>
int main()
{
    int i, X[10], j=1;
    for( i=0; i<10; i++ ){
        scanf("%d", &X[i]);
        if( X[i]<=0 ){
            printf("X[%d] = %d\n", i, j);
        }
        else{
            printf("X[%d] = %d\n", i, X[i]);
        }
    }
    return 0;
}
