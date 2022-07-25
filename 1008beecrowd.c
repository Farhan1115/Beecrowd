#include<stdio.h>
int main()
{
    int N, H;
    double M, SALARY;
    scanf("%d %d %lf", &N, &H, &M);
    printf("NUMBER = %d\n",N);
    SALARY = (H*M);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
