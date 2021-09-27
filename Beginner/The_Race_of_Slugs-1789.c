#include<stdio.h>
int main()
{
    int max=0,i,n,s;
    while(scanf("%d",&n)!=EOF){
    for(i=0,max=0;i<n;i++)
    {
        scanf("%d",&s);
        if(s>max)
        {
            max=s;
        }
    }

    if(max<10)
    {
        printf("1\n");
    }
     else if(max>=10&&max<20)
    {
        printf("2\n");
    }
     else if(max>=20)
    {
        printf("3\n");
    }
    }
    return 0;
}
