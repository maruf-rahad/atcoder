#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,sum;

    while(scanf("%d",&n)==1)
    {
        m = 7;
        sum = 0;
        if(n%2==0||n%5==0)printf("-1\n");
        else
        {
            while(m%n!=0)
            {
                sum++;
                m = m*10+7;
                m = m%n;
            }
            printf("%d\n",sum+1);



        }
    }







return 0;
}
