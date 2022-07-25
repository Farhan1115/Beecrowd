#include<stdio.h>
int main()
{
    int N, num=0;
    double sum=0.0;
    for( ; ; ){
        scanf("%d", &N);
        if( N>0 ){
            sum = sum+N;
            num = num+1;
        }
        else{   break;  }
    }
    printf("%.2lf\n", sum/num);
    return 0;
}
