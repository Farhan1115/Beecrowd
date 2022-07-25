#include<stdio.h>
int main()
{
    int N,H,H1,M1,M,S;
    scanf("%d",&N);
    H=N/3600;
    H1=N%3600;
    M=H1/60;
    S=N%60;
    printf("%d:%d:%d\n", H, M, S);
    return 0;
}
