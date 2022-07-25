#include<stdio.h>
int main()
{
    int a, b;
    double I, J;
    for( I=0.0; I<=2.0; I=I+0.2)
    {
         for( J=1.0; J<=3.0; J++ )
         {
              if( I>0.0 && I<1.0 || I>1.0 && I<2.0 )
        {
            printf("I=%.1lf J=%.1lf\n", I, J+I);

         }
         else
         {
             a=I;
             b=I+J;
             { printf("I=%d J=%d\n", a, b); }
         }
        }

    }
    return 0;
}

