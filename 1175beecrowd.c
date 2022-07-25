#include<stdio.h>
int main()
{
    int N[20], y, i, j;
    for( i=19; i>=0; i-- ){
        scanf("%d", &N[i]);
    }
        for( j=0; j<20; j++ ){
            N[i] = N[j];
            printf("N[%d] = %d\n", j, N[j]);
        }
    return 0;
}
