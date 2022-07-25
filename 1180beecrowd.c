#include<stdio.h>
int main()
{
    int N, i, min=0, position;
    scanf("%d", &N);
    if( N>1 && N<1000 ){
        for( i=0; i<N; i++ ){
            int X[N];
                scanf("%d", &X[i]);
            if( min>X[i] ){
                min = X[i];
                position = i;
            }
        }
            printf("Menor valor: %d\n", min);
            printf("Posicao: %d\n", position);
    }
    return 0;
}
