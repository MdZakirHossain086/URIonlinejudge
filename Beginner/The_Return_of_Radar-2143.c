#include<stdio.h>
int main()
{
    int n,i,a;
    while(scanf("%d",&n)&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2==1)
                printf("%d\n",a*2-1);
            else
                printf("%d\n",a*2-2);
        }
    }
    return 0;
}
