#include <iostream>
using namespace std;
int main( )
{
    long long n,m,i,s,timea,counta=0;//s�˷�������i����������n������m��һ����Ҫ�жϵ�����
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
