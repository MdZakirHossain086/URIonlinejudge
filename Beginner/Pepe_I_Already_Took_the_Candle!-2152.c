#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
       if(a<10)
        printf("0%d",a);
       else
        printf("%d",a);
       if(b<10)
        printf(":0%d",b);
       else
        printf(":%d",b);
        if(c==0)
            printf(" - A porta fechou!\n");
        else
            printf(" - A porta abriu!\n");
    }
    return 0;
}
