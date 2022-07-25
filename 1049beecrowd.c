#include<stdio.h>
int main()
{
    char name1, name2, name3;
    gets(name1);
    gets(name2);
    gets(name3);
    if(name1 == "vertebrado")
    {
        if(name2 == "ave")
        {
            if(name3 == "carnivoro"){
                printf("aguia\n");
            }
            else if(name3 == "onivoro")
            {
                printf("pomba\n");
            }
        }
        else if(name2 == "mamifero")
        {

            if(name3 == "onivoro"){
                printf("homem\n");
            }
            else if(name3 == "herbivoro")
            {
                printf("vaca\n");
            }
        }
    }
        if(name1 == "invertebrado")
    {
        if(name2 == "inseto")
        {
            if(name3 == "hematofago"){
                printf("pulga\n");
            }
            else if(name3 == "herbivoro")
            {
                printf("lagarta\n");
            }
        }
        else if(name2 == "anelideo")
        {
            if(name3 == "hematofago"){
                printf("sanguessuga\n");
            }
            else if(name3 == "onivoro")
            {
                printf("minhoca\n");
            }

    }
    }
    return 0;
}
