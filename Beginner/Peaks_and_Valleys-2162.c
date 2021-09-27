//not solved
#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==2&&a[0]==a[1]){
        c=1;
    }
    else
    {
        for(i=2;i<n;i++)
    {
        if(a[i]>=a[i+1]&&a[i+1]>=a[i+2]){
          c=1;
        break;
        }
        else if(a[i]<=a[i+1]&&a[i+1]<=a[i+2]){
          c=1;
        break;
        }
    }
    }
    if(c==1)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
