#include<stdio.h>
int main()
{
    int input,i,highest=0,position=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d\n",&input);
        if(input>highest){
            highest=input;
        position=i;
    }
    }
    printf("%d\n%d\n",highest,position);
    return 0;
}
