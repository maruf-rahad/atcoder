#include<bits/stdc++.h>
using namespace std;
char ch[10][10];
int main()
{


    int n,m,a,b,i,j,x,y,t,k,col,row,ans;

    while(scanf("%d %d %d",&n,&m,&k)==3)
    {
        getchar();
        ans = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }


        for(row=0;row<=(1<<n)-1;row++)
        {
            for(col=0;col<=(1<<m)-1;col++)
            {

                x = 0;

                for(i=0;i<n;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        if((((row>>i)&1)==0)&&(((col>>j)&1)==0)&&ch[i][j]=='#')
                        {
                            x++;
                        }
                    }
                }
                if(x==k)ans++;
            }
        }

        printf("%d\n",ans);




    }












return 0;
}
