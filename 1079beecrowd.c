#include<stdio.h>
int main()
{
    int N, i, j;
    double a, avg, k1, k2, k3;
    scanf("%d", &N);
    for( i=1; i<=N; i++ ){
        for( j=1; j<=3; j++ ){
        scanf("%lf", &a);
        if( j==1 ){   k1 = a*2;    }
        if( j==2 ){   k2 = a*3;    }
        if( j==3 ){   k3 = a*5;    }
    }
    avg = ( k1 + k2 + k3 )/10.0;
    printf("%.1lf\n", avg);
    }
    return 0;
}
