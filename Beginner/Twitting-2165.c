#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    gets(s);
    if(strlen(s)>140){
        printf("MUTE\n");
    }
    else
        printf("TWEET\n");
    return 0;
}
