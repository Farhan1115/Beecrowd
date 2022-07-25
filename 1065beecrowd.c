#include<stdio.h>
int main()
{
    int i, sum = 0, a;
    for( i = 1; i<=5 ; i++)
    {
        scanf("%d", &a);
        if(a%2==0){sum = sum + 1;}
    }
    printf("%d valores pares\n", sum);
    return 0;
}
