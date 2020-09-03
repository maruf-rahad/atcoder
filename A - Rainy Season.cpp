#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,x;
    while(cin>>s)
    {
        i = 0;

        if(s[i]=='R'&&s[i+1]=='R'&&s[i+2]=='R')x = 3;
        else if(s[i]=='S'&&s[i+1]=='S'&&s[i+2]=='S')x = 0;
        else if((s[i]=='R'&&s[i+1]=='R')||(s[i+1]=='R'&&s[i+2]=='R'))x = 2;
        else x = 1;
        printf("%d\n",x);
    }






return 0;
}
