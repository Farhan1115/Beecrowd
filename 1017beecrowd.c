#include <stdio.h>
int main()
{
    int S, H;
    double ans;
    scanf("%d %d", &H, &S);
    ans = (S*H)/12.0;
    printf("%.3lf\n",ans);
    return 0;
}
