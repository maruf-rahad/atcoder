#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    int n,sum,i,j,m;

    while(scanf("%d %d",&n,&m)==2)
    {
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lf %lf",&a,&b);

            if(sqrt(a*a+b*b)<=m)sum++;

        }
        printf("%d\n",sum);
    }










return 0;
}
