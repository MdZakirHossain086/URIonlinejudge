//not solved
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string name;
    double d,min=100.00,max=-10.00,s,sum=0.00;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        cin>>name;
        cin>>d;
        for(i=1;i<=7;i++)
        {
            cin>>s;
            if(s>max)
            {
                max=s;

            }
            if(s<min)
            {
                min=s;
            }
            sum=sum+s;
        }
            sum=sum-(min+max);
            sum=sum*d;
        printf("%s %.2lf\n",name,sum);

    }
    return 0;
}
