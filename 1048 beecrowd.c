#include<stdio.h>
int main()
{
    double S,S1,Inc;
    scanf("%lf",&S);
    char c='%';
    if(S>=0.00 && S<=400.00)
    {
        S1=S+(S*0.15);
        Inc=(S*0.15);
        printf("Novo salario: %.2lf\n",S1);
        printf("Reajuste ganho: %.2lf\n",Inc);
        printf("Em percentual: 15 %c\n",c);
    }

     else if(S>=400.01 && S<=800.00)
    {
        S1=S+(S*0.12);
        Inc=(S*0.12);
        printf("Novo salario: %.2lf\n",S1);
        printf("Reajuste ganho: %.2lf\n",Inc);
        printf("Em percentual: 12 %c\n",c);

    }
    else if(S>=800.01 && S<=1200.00)
    {
       S1=S+(S*0.10);
       Inc=(S*0.10);
       printf("Novo salario: %.2lf\n",S1);
       printf("Reajuste ganho: %.2lf\n",Inc);
        printf("Em percentual: 10 %c\n",c);
    }
    else if (S>=1200.01 && S<=2000.00)
    {
        S1=S+(S*0.07);
        Inc=(S*0.07);
        printf("Novo salario: %.2lf\n",S1);
        printf("Reajuste ganho: %.2lf\n",Inc);
        printf("Em percentual: 7 %c\n",c);
    }
    else if(S>2000.00)
    {
    S1=S+(S*0.04);
       Inc=(S*0.04);
       printf("Novo salario: %.2lf\n",S1);
       printf("Reajuste ganho: %.2lf\n",Inc);
       printf("Em percentual: 4 %c\n",c);
    }
    return 0;
}
