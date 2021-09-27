#include<stdio.h>
void main()
{
    int a,sum=0;
    float i=0,avg;

    while(1)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        else{
        sum+=a;
        i++;
        }
    }
    avg=sum/i;
    printf("%.2f",avg);
}
