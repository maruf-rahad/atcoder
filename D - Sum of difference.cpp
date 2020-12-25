#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[222222];
int main()
{
    ll n,m,a,b,i,j,x,y,sum;

    while(scanf("%lld",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }
        sort(ara+1,ara+n+1);

        sum = 0;
        for(i=2;i<=n;i++)
        {
            sum+= (abs(ara[i]-ara[i-1])*(i-1)*(n-i+1));
        }

        printf("%lld\n",sum);
    }









return 0;
}
