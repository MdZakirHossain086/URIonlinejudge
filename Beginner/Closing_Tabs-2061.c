#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i;
    char s[10];
    scanf("%d%d",&n,&m);
    int c=n;
    for(i=0;i<m;i++)
    {
        scanf("%s",s);
        if(s[0]=='f')
            c++;
        else
            c--;
    }
    printf("%d\n",c);
    return 0;
}
