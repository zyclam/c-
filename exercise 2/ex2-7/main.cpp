#include<stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int t,countt,a,m,n,s=0,k=0,i;
    while(cin>>t)
    {
        countt=0;
        while(scanf("%d %d",&m,&n)!=EOF)
        {

            for(i=m; i<=n; i++)
            {
                if(i%2==0)//��ƽ����
                {
                    s=s+i*i;
                }
                else
                {
                    k=k+i*i*i;//��������
                }
            }
            printf("%d %d\n",s,k);
            s=0;
            k=0;
          countt++;
           if (countt>=t)break;
        }

       if (countt>=t)break;
    }

    return 0;
}
