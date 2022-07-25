#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,N5,average,average2;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    average = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %.1lf\n",average);
    if(average>=7)
    {
        printf("Aluno aprovado.\n");
    }
    if(average<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if(average>=5.0 && average<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %.1lf\n",N5);
        average2 = (average+N5)/2;
        if(average2>=5.0)
    {
        printf("Aluno aprovado.\n");
    }
        else {
            printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",average2);
    }
    return 0;
}
