#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

#define MAX (100 + 5)

int mp[MAX][MAX];
int sum[MAX][MAX];
int temp[MAX][MAX];

int main()
{
    int n,cnt;
    while(cin >> n)
    {
        int  mini = -0x7ffffff;
        memset(mp,0,sizeof(mp));
        memset(sum,0,sizeof(sum));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                cin >> mp[i][j];
                if(mp[i][j] > mini)
                    mini = mp[i][j];
            }
        if(mini<0);
        {
            cout << min << endl;
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                sum[i][j]=sum[i][j-1]+mp[i][j];
        }
        ans=0
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=0;k<i;k++)
                {
                    temp[j][k+1]=sum[j][i]-sum[j][k];
                }
            }
            for(int k=1;k<=i;k++)
            {
                cnt=0;
                for(int j=1;j<=n;j++)
                {
                    cnt+=temp[j][k];
                    if(ans<cnt)  ans=cnt;
                    if(cnt<0)    cnt=0;
                }
            }
        }
        cout << ans << endl;

    return 0;
}
