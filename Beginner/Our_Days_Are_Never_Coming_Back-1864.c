#include<stdio.h>
int main()
{
    int a,i,n;
    char s[40]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
