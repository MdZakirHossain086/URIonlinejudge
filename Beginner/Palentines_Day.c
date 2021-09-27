#include<stdio.h>
int main()
{
    int n=365,flower=0,i;
    for(i=1;i<=n;i++)
    {
        flower+=i;
    }
    printf("%d\n",flower);
    return 0;
}
