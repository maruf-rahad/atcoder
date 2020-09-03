#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mxx 200010

ll ara[mxx+5];
ll ara2[mxx+5];
ll cnt[mxx+5];
ll cnt2[mxx+5];


int main()
{
    ll n,m,a,b,i,j,x,y,t,sum,flag,mx;

    while(scanf("%lld %lld %lld",&n,&m,&t)==3)
    {
        mx = -99;
        ara[0] = 0;
        ara2[0] = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }
        for(i=1;i<=m;i++)
        {
            scanf("%lld",&ara2[i]);
        }

        for(i=2;i<=n;i++)
        {
            ara[i] = ara[i]+ara[i-1];
        }

        for(i=2;i<=m;i++)
        {
            ara2[i] = ara2[i]+ara2[i-1];
        }

        sum = -1;
        j = m;
        for(i=0;i<=n;i++)
        {
            if(ara[i]>t)break;

            while(ara[i]+ara2[j]>t&&j>=0)
            {
                j--;
            }
            sum = max(sum,i+j);

        }

        printf("%lld\n",sum);




    }









return 0;
}
