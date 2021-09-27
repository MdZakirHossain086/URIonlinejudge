#include<stdio.h>
void main()
{
    int n,fact=1,i;
    scanf("%d",&n);
    for(i=4;i>=1;i--)
    {
        fact*=i;
    }
    printf("%d\n",fact);
}
