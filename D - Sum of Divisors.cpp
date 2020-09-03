#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mxx 10000000

ll ara[mxx+5];
ll ara2[mxx+5];
ll cnt[mxx+5];
ll cnt2[mxx+5];

void solve()
{
    ll i,j,mx = 10000000;
    ara[1] = 1;
    for(i=2;i<=mx;i++)
    {
        ara[i]++;
        for(j=i;j<=mx;j+=i)
        {
            ara[j]++;
        }
    }
    ara2[0] = 0;
    for(i=1;i<=mx;i++)
    {
        ara2[i] = ara2[i-1]+i*ara[i];
    }


}
int main()
{
    solve();

    ll n;

    while(scanf("%lld",&n)==1)
    {
        printf("%lld\n",ara2[n]);
    }












return 0;
}
