#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        if(i%2==0)
            printf("%d^2 = %d\n",i,i*i);
    }
    return 0;
}
