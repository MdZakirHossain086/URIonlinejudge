#include<stdio.h>
int main()
{
    int a=1;

    while(a!=2002)
    {
         scanf("%d",&a);
        if(a==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
            else{
            printf("Senha Invalida\n");
            }
    }
    return 0;

}
