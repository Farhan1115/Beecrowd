#include<stdio.h>
int main()
{
    int X, Y, sum = 0, i, odd;
    scanf("%d %d", &X, &Y);
    if(X<Y)
    {
       for( i=(X+1); i<Y; i++ )
       {
           if( i%2!=0 ){ sum = sum+i; }
       }
       printf("%d\n", sum);
    }
    else {
        for( i=Y+1; i<X; i++ )
        {
            if( i%2!=0 ){ sum = sum+i; }
        }
        printf("%d\n", sum);
    }
    return 0;
}
