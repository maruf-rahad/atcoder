#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,a,b,i,j,x,y,k,ans;

    while(scanf("%lld %lld %lld",&n,&k,&m)==3)
    {
        n = abs(n);
        x = n/m;
        if(x>=k)printf("%lld\n",n-m*k);
        else
        {
            ans = n-m*x;
            k-=x;

            if(k%2==0)
            {
                printf("%lld\n",ans);
            }
            else
            {
                printf("%lld\n",abs(ans-m));
            }
        }
    }










return 0;
}
