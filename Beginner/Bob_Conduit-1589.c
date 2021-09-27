#include<stdio.h>
int main()
{
    int T,r1,r2,r,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d%d",&r1,&r2);
        r=r1+r2;
        printf("%d\n",r);
    }
    return 0;
}
