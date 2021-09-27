#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10100];
    int i,l;
    scanf("%d",&i);
    while(i--)
    {
        scanf("%s",ch);
        l=strlen(ch);
        printf("%.2lf\n",(l*.01));
    }
    return 0;
}
