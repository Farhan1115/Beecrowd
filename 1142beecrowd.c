#include<stdio.h>
int main()
{ int N, i, k=1, j, l;
  scanf("%d", &N);
  for( i=1; i<=N; i++ ){
        for( j=1; j<=3; j++ ){
            printf("%d ", k);
            k++;
        }
        k++;
    printf("PUM\n");
  }
    return 0;
}
