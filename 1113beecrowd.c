#include<stdio.h>
int main()
{
    int X, Y;
    for( ; ; )
    {
        scanf("%d %d", &X, &Y);
        if(X==Y){ printf(""); break; }
        else if(X>Y){ printf("Decrescente\n"); }
        else if(X<Y){ printf("Crescente\n"); }
        }
    return 0;
}
