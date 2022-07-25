#include<stdio.h>
int main()
{
    int N, a=0, g=0 , d=0;
    for( ; ; ){
        scanf("%d", &N);
        if( N>4 ) {
            for( ; ; ){
                scanf("%d", &N);
                if( N<=4 ){ break; }
            }
        }
        if( N==1 ){ a = a+1; }
        else if( N==2 ){  g = g+1;  }
        else if( N==3 ){  d = d+1;  }
        else if( N==4 ){  break;  }
        }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    return 0;
}
