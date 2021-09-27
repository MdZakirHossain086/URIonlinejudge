#include<stdio.h>
int main()
{
    int hour,speed;
    double distance,fuel;
    scanf("%d%d",&hour,&speed);
    distance=hour*speed;
    fuel=distance/12;
    printf("%.3lf\n",fuel);
    return 0;
}
