#include<stdio.h>
int main()
{
    int H,h,total;
    scanf("%d %d", &H, &h);
    total = ((24-H)+h);
    if(total>24)
    {
        total = (total - 24);
    }
    printf("O JOGO DUROU %d HORA(S)\n",total);
    return 0;
}
