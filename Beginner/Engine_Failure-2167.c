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
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i]){
            c+=1;
            printf("%d\n",i+2);
        break;
        }
    }
    if(c==0)
        printf("0\n");
    return 0;
}
