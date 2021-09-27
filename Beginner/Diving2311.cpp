#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double  score, diff;
    char s[100];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double max=-5.0, min=100, res=0.0;
        cin>>s;
        cin>>diff;
        for(int j=0;j<7;j++)
        {
            cin>>score;
            if(score>max)
                max=score;
            if(score<min)
                min=score;
            res=res+score;
        }
        res=res-(max+min);
        res=res*diff;

       printf("%s %.2lf\n",s,res);
    }
    return 0;
}
