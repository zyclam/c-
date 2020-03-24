#include <iostream>
using namespace std;
int main( )
{
    long long n,m,i,s,timea,counta=0;//s乘法计数，i个数计数，n个数，m第一个需要判断的数据
    while(cin>>timea){
            while(cin>>n)
        {
            counta++;
            s=1;
            for(i=0; i<n; i++)
            {
                cin>>m;
                if(m%2!=0)
                    s=s*m;
            }
            cout<<s<<endl;
        if(counta>=timea)break;
        }
        if(counta>=timea)break;
    }

    return 0;
}
