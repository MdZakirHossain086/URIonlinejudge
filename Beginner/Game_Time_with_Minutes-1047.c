#include<stdio.h>
int main()
{
    int sh,sm,eh,em,th,tm;
    scanf("%d%d%d%d",&sh,&sm,&eh,&em);
    th=eh-sh;
    tm=em-sm;
    if(th<0)
    {
        th=24+th;
    }
    if(tm<0)
    {
        tm=60+tm;
        th--;
    }
    if(sh==eh&&sm==em)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
    return 0;
}
