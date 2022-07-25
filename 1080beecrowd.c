#include<stdio.h>
int main()
{
    int N, i, max=0, position;
    for( i=1; i<=100; i++ ){
        scanf("%d", &N);
            if( max<N ){
                max = N;
                position = i;
            }
    }
    printf("%d\n%d\n", max, position);
    return 0;
}
