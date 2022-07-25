#include<stdio.h>
int main()
{
    int i, Password;
    for( ; ; ){
        scanf("%d", &Password);
    if(Password == 2002){ printf("Acesso Permitido\n"); break; }
    else{ printf("Senha Invalida\n"); }
    }
    return 0;
}
