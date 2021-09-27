#include<stdio.h>
int main()
{
    int i,j,c=0,n=0,m=0,a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a-1;i++)
    {
        for(j=0;j<b-1;j++)
        {
            if(arr[i][j]==42)
            {
                if(arr[i-1][j-1]==7&&arr[i-1][j]==7&&arr[i-1][j+1]==7&&arr[i][j-1]==7&&arr[i][j+1]==7&&arr[i+1][j-1]==7&&arr[i+1][j]==7&&arr[i+1][j+1]==7)
                {
                    c=1;
                    n=i+1;
                    m=j+1;
                }
            }
        }
    }
    printf("%d %d\n",n,m);
    return 0;
}
