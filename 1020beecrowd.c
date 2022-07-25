#include<stdio.h>
int main()
{
    int N,A,A1,M,D;
    scanf("%d",&N);
    A=N/365;
    A1=N%365;
    M=A1/30;
    D=A1%30;
    printf("%d ano(s)\n",A);
    printf("%d mes(es)\n",M);
    printf("%d dia(s)\n",D);
    return 0;
}
