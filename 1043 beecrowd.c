#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A , &B , &C);
    if (A+B>C && B+C>A && C+A>B)
    {
        printf("Perimetro = %.1lf\n",A+B+C);
    }
    else
    {
        double area;
        area = (((A+B)/2)*C);
        printf("Area = %.1lf\n",area);
    }
    return 0;
}
