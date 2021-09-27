#include<stdio.h>
int main()
{
    int i,a,c=0,k=0,n;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

        if(x[i]>=10&&x[i]<=20){
            c++;
        }
       else {
           k++;
       }
    }
     printf("%d in\n",c);
     printf("%d out\n",k);
    return 0;
}
