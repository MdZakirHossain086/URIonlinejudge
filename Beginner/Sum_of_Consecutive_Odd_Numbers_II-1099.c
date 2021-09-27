#include<stdio.h>
int main()
{
    int n,a,b,i,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a==b)
        {
            sum=0;
            printf("%d\n",sum);
        }

        else if(a<b)
        {
            for(i=a+1,sum=0;i<b;i++)
        {
           if(i%2==1)
           sum=sum+i;
        }
        printf("%d\n",sum);
        }

        else if(a>b)
        {
               for(i=b+1,sum=0;i<a;i++)
        {
            if(i%2==1)
                sum=sum+i;
        }
         printf("%d\n",sum);
        }
    }
    return 0;
}
