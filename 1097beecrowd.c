#include<stdio.h>
int main()
{
    int I, J;
    for( I=1; I<=9; I=I+2)
    {
        if(I==1){for( J=7; J>=5; J--)
        {
            printf("I=%d J=%d\n", I, J);
        }
        }
        if(I==3){for( J=9; J>=7; J--)
        {
            printf("I=%d J=%d\n", I, J);
        }
        }
        if(I==5){for( J=11; J>=9; J--)
        {
            printf("I=%d J=%d\n", I, J);
        }
        }
        if(I==7){for( J=13; J>=11; J--)
        {
            printf("I=%d J=%d\n", I, J);
        }
        }
        if(I==9){for( J=15; J>=13; J--)
        {
            printf("I=%d J=%d\n", I, J);
        }

    }
        }
    return 0;
}
