#include<stdio.h>
int main()
{
    int i,a,o=0,e=0,p=0,n=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(a<0)
            n++;
        if(a>0)
            p++;
        if(a%2==1||a%2==-1)
            o++;
        if(a%2==0)
            e++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);

    return 0;

}
