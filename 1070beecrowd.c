#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if(X>0)
    {
        int i, j, result;
        if(X%2 == 0)
        {   for(i = X; i<=X+12; i++ ){
            if( i%2!=0 ){
                    printf("%d\n", i);
            }
            }
            }
    else{ for( j=X; j<=X+11; j++ ){
            if( j%2!=0 ){
            printf("%d\n", j);
            }
             }
    }
    }
    return 0;
}
