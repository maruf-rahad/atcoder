#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,sum,flag,flag2;
    string s;

    while(scanf("%d",&n)==1)
    {
        cin>>s;

        x = 0;
        y = 0;
        sum = 0;
        flag = 0;
        flag2 = 0;

        for(i=0;i<n;i++)
        {
            if(s[i]=='W')x++;
            else y++;

        }

        for(i=0;i<y;i++)
        {
            if(s[i]=='W')sum++;
        }

        printf("%d\n",sum);


    }













return 0;
}
