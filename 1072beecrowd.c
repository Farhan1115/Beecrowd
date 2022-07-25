#include<stdio.h>
int main()
{
    int N, X, i, sum=0, sum1=0;
    scanf("%d", &N);
    if( N < 10000 ){
        for( i=1; i<=N; i++ ){
      scanf("%d", &X);
      if( X>=10 && X<=20 ){
            sum = sum+1;
      }
      else{
        sum1 = sum1+1;
      }
    }
    }
    printf("%d in\n", sum);
    printf("%d out\n", sum1);
    return 0;
}
