#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0)
        {
            break;
        }
        if(a>b)
        {
            for(i=b,sum=0;i<=a;i++)
            {

                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
        if(a<b)
        {
            for(i=a,sum=0;i<=b;i++)
            {

                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
