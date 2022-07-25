#include<stdio.h>
int main()
{
    int X, i, sum;
    for( ; ; ){
            sum = 0;
        scanf("%d", &X);
    if( X>0 ){
        for( i=X; i<=X+9; i++ ){
           if( i%2==0 ){
            sum  = sum+i;
           }
        }
        printf("%d\n", sum);
    }
        else if( X==0 ){ break; }
    }
    return 0;
}
