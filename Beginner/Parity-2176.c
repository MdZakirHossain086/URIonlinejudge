#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,c=0;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
            c++;
    }
    if(c==0||c%2==0)
        printf("%s0\n",s);
    else
        printf("%s1\n",s);
    return 0;

}
