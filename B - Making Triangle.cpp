#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<int,int>mp;
set<int>st;
set<int> :: iterator it;

int main()
{
    int n,m,a,b,i,j,x,y,sum,k;

    while(scanf("%d",&n)==1)
    {
        mp.clear();
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        sum = 0;

        for(i=0;i<v.size();i++)
        {
            for(j=0;j<v.size();j++)
            {
                for(k=0;k<v.size();k++)
                {
                    if(i<j&&j<k&&v[i]!=v[j]&&v[i]!=v[k]&&v[j]!=v[k]&&v[i]+v[j]>v[k])
                    {
                        sum++;
                    }
                }
            }
        }

        printf("%d\n",sum);
    }










return 0;
}
