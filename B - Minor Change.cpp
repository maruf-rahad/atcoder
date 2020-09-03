#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    int i,sz,sum;

    while(cin>>s>>s2)
    {
        sum = 0;
        sz = s.size();
        for(i=0;i<sz;i++)
        {
            if(s[i]!=s2[i])
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }


   return 0;
}
