#include<stdio.h>
int main()
{   char name;
    double a,b,c,total;
    scanf("%s",&name);
    scanf("%lf %lf",&a,&b);
    c=(b*15)/100;
    total=a+c;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
