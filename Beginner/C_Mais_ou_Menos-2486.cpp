#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    while(scanf("%d",&T)!=0)
    {
        long long food=0;
        for(int i=0;i<T;i++){
        int n;

        cin>>n;
        cin.ignore();
        string str;
        getline(cin,str);
        if(str=="suco de laranja")
        {
            food=food+(n*120);
        }
        else if(str=="morango fresco"||str=="mamao")
        {
            food=food+(n*85);
        }
        else if(str=="goiaba vermelha")
        {
            food=food+(n*70);
        }else if(str=="manga")
        {
            food=food+(n*56);
        }else if(str=="laranja")
        {
            food=food+(n*50);
        }
        else if(str=="brocolis")
        {
            food=food+(n*34);
        }
    }

        if(food<110)
        {
            printf("Mais %d mg\n",110-food);
        }
        else if(food>130)
        {
            printf("Menos %d mg\n",food-130);
        }
        else
        {
            printf("%d mg\n",food);
        }
    }
    return 0;
}
