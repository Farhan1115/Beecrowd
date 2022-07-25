#include<stdio.h>
int main()
{
    int N,A,B,C,D,E,F;
    scanf("%d",&a);
    printf("%d\n",a);
    printf("%d nota(s) de R$ 100,00\n",a/100);
    A=a%100;
    printf("%d nota(s) de R$ 50,00\n",A/50);
    B=A%50;
    printf("%d nota(s) de R$ 20,00\n",B/20);
    C=B%20;
    printf("%d nota(s) de R$ 10,00\n",C/10);
    D=C%10;
    printf("%d nota(s) de R$ 5,00\n",D/5);
    E=D%5;
    printf("%d nota(s) de R$ 2,00\n",E/2);
    F=E%2;
    printf("%d nota(s) de R$ 1,00\n",F/1);
    return 0;
}
