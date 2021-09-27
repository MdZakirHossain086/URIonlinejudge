#include<stdio.h>
int main()
{
    int n,a[6],i;
    scanf("%d",&n);
    if(n%2==0)
    {
        n=n+1;
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n",n);
        n+=2;
    }
    return 0;
}
