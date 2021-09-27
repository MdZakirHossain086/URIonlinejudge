#include<stdio.h>
int main()
{
    int a,b,i,n;
    char s[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        scanf("%d",&a);
        if(s[0]=='T'&&s[1]=='h'&&s[2]=='o'&&s[3]=='r')
            printf("Y\n");
            else
            printf("N\n");
    }
    return 0;
}
