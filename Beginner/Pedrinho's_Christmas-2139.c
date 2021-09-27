//not solved
#include<stdio.h>
int main()
{
    int m,d,e;
    while(scanf("%d%d",&m,&d)!=EOF)
    {
        if(m==1)
            e=360-d;
        if(m==2)
            e=360-d-31;
        if(m==3)
            e=360-d-31-29;
        if(m==4)
            e=360-d-31-29-31;
        if(m==5)
            e=360-d-31-29-31-30;
        if(m==6)
            e=360-d-31-29-31-30-31;
        if(m==7)
            e=360-d-31-29-31-30-31-30;
        if(m==8)
            e=360-d-31-29-31-30-31-30-31;
        if(m==9)
            e=360-d-31-29-31-30-31-30-31-31;
        if(m==10)
            e=360-d-31-29-31-30-31-30-31-31-30;
        if(m==11)
            e=360-d-31-29-31-30-31-30-31-31-30-31;
        if(m==12)
            e=360-d-31-29-31-30-31-30-31-31-30-31-30;

    }
    if(e==0)
        printf("E natal!\n");
    else if(e==1)
        printf("E vespera de natal!\n");
    else if(e>1)
        printf("Faltam %d dias para o natal!\n",e);
    else if(e<0)
        printf("Ja passou!\n");
    return 0;

}
