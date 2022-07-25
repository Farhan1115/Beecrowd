#include<stdio.h>
int main()
{
    int M, N, i, sum=0;
    for( ; ; ){
            scanf("%d %d", &M, &N);
         if(M>0 && N>0)
    {
        if(M>N)
        {
            for( i=N; i<=M; i++)
            {

                sum = sum+i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
        else if(M<N)
        {
            for( i=M; i<=N; i++)
            {

                sum = sum+i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
    }
    else if(M==0 || N==0)
    {

        printf("");
        break;
    }
    }
    return 0;
}
