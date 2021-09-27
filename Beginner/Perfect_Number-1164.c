#include<stdio.h>
int main()
{
    int n,i,j,x,c,div=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&x);
        c=x/2,div=0;
        for(i=1;i<=c;i++)
        {
            if(x%i==0)
                div+=i;
        }
        if(div==x)
        printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);
    }
    return 0;
}
