#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main()
{
    long long n,m,a,b,i,j,x,y,sum;

    while(scanf("%lld",&n)==1)
    {
        v.clear();
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            v.push_back(a);
        }

        sort(v.begin(),v.end());
        x = n-2;
        sum+=v[n-1];
        for(i=v.size()-2;i>=1;i--)
        {
            sum+=v[i];
            x--;
            if(x==0)break;
            sum+=v[i];
            x--;
            if(x==0)break;
        }

        printf("%lld\n",sum);


    }












return 0;
}
