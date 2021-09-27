#include<stdio.h>
int main()
{
    int a,b,dt;
    scanf("%d%d",&a,&b);
    dt=b-a;
    if(dt<0)
    {
        dt=24+(b-a);
        printf("O JOGO DUROU %d HORA(S)\n",dt);
    }
    else if(a==b){
       printf("O JOGO DUROU %d HORA(S)\n",24-(a-b));
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n",dt);
    return 0;
}
