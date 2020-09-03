#include<bits/stdc++.h>
using namespace std;
char ch[1111];
char ch2[1111];

int main()
{

    int n,m,a,b,i,j,x,y,sum;


    while(scanf("%s",&ch)==1)
    {
        scanf("%s",&ch2);

       n = strlen(ch);
       m = strlen(ch2);
       x = 1e9;
       for(i=0;i<=n-m;i++)
       {
           sum = 0;
            for(j=0;j<m;j++)
            {
                if(ch[i+j]!=ch2[j])
                {
                    sum++;
                }
            }

            x = min(x,sum);
       }

       printf("%d\n",x);
    }










return 0;
}
