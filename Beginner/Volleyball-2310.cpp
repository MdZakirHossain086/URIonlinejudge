#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,b,a,s1,b1,a1,ts=0,tb=0,ta=0,ts1=0,tb1=0,ta1=0;
    string ch;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>ch;
        scanf("%d%d%d",&s,&b,&a);
        scanf("%d%d%d",&s1,&b1,&a1);

        ts=ts+s;
        tb=tb+b;
        ta=ta+a;
        ts1=ts1+s1;
        tb1=tb1+b1;
        ta1=ta1+a1;
    }
    printf("Pontos de Saque: %.2lf %%.\n",(ts1*100.00)/ts);
    printf("Pontos de Bloqueio: %.2lf %%.\n",(tb1*100.00)/tb);
    printf("Pontos de Ataque: %.2lf %%.\n",(ta1*100.00)/ta);
    return 0;
}
