#include<stdio.h>
int main()
{
    int H1, M1, H2, M2, result, h, m;
    scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
    result = ((H2 * 60) + M2)-((H1 * 60) + M1);
    if(result==0)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        h = result/60;
        m = result%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }

    return 0;
}
