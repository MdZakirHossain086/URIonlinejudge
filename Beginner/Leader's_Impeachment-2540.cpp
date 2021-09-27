#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    while(cin>>n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            if(v==1)
                sum++;
        }
        double final = ceil(n*.666);
        int x = (int)final;
        if(sum>=x)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
    return 0;
}
