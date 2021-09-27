#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x=min(a,min(b,c));
    z=max(a,max(b,c));
    y=a+b+c-x-z;
    if(x+y<=z)
    {
        printf("Invalido\n");
    }
    else
    {
        if((x!=y&&y==z)||(y!=z&&z==x)||(z!=x&&x==y))
        {
            printf("Valido-Isoceles\n");
        }

        else if(x!=y&&y!=z&&z!=x)
        {
            printf("Valido-Escaleno\n");
        }
        else if(x==y&&y==z&&z==x)
        {
            printf("Valido-Equilatero\n");
        }
        if(x*x+y*y==z*z)
        {
            printf("Retangulo: S\n");
        }
        else
            printf("Retangulo: N\n");
    }
    return 0;
}
