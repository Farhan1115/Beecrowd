#include<stdio.h>
int main()
{
    double S,Tax;
    scanf("%lf",&S);
    if(S>=0.00 && S<=2000.00)
    {
        printf("Isento\n");
    }
    else if(S>=2000.01 && S<=3000.00)
    {
     Tax=((S-2000.00)*0.08);
     printf("R$ %.2lf\n",Tax);
    }
    else if(S>=3000.01 && S<=4500.00)
    {
        Tax=((1000*0.08)+((S-3000.00)*0.18));
        printf("R$ %.2lf\n",Tax);
    }
    else if(S>4500.00)
    {
      Tax=((1000*0.08)+(1500.00*0.18)+((S-4500.00)*0.28));
      printf("R$ %.2lf\n",Tax);
    }
    return 0;
}
