#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>1 && N<1000)
    {
       int i;
       for(i=1 ; i<=10 ; i++)
       {
           printf("%d x %d = %d\n",i,N,i*N);
       }
    }
    return 0;
}
