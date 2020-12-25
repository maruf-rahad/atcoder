#include<bits/stdc++.h>
using namespace std;

int ara[111][111];

int main()
{
    int n,m,a,b,i,j,sum,mn;

    while(scanf("%d %d",&n,&m)==2)
    {
        mn = 1e8;
        sum = 0;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d",&ara[i][j]);
                mn = min(mn,ara[i][j]);
            }
        }

            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                {
                    sum+=ara[i][j]-mn;
                }
            }

        printf("%d\n",sum);

    }








    return 0;
}
