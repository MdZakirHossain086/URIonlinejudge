#include<stdio.h>
int main()
{
    int s,t,f,total;
    scanf("%d%d%d",&s,&t,&f);
    total=s+t+f;
    if(total==24)
        printf("0\n");
    else if(total<0)
        printf("%d\n",24+total);
    else if(total>24)
        printf("%d\n",total-24);
    else
        printf("%d\n",total);
    return 0;
}
