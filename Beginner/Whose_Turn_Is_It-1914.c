#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],s3[10],s4[10],c="PAR";
    int n,i,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%s%s%s",s1,s2,s3,s4);
        scanf("%d%d",&a,&b);
        i=a+b;
        if(s2[0]=='P')
        {
            if(i%2==0)
                printf("%s\n",s1);
            else
                printf("%s\n",s3);
        }
        else
        {
            if(i%2==0)
                printf("%s\n",s3);
            else
                printf("%s\n",s1);
        }
    }
    return 0;
}
