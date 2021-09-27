#include<stdio.h>
int main()
{
    int x,n,i,sum=0;
    while(1){
            scanf("%d",&x);
        if(x==0)
        break;
       else if(x%2==1){
            x=x+1;
     for(i=0;i<5;i++)
       {
        sum=sum+x;
        x+=2;
       }
    }
        else{
            x=x;
       for(i=0;i<5;i++)
       {
        sum=sum+x;
        x+=2;
       }
        }
printf("%d\n",sum);
       sum=0;
    }
    return 0;
}
