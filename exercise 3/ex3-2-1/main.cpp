#include <iostream>

using namespace std;

int main()
{
    int n,i;
    long long sum,mmin,mmax;
    int m;
    cin>>n;

    cin>>m;
    sum=mmin=mmax=m;
    for(i=1; i<n; i++)
    {
        cin>>m;
        if(m<mmin)
        {
            mmin=m;
        }
        if(m>mmax)
        {
            mmax=m;
        }
        sum+=m;
    }
    cout<<mmin<<" "<<mmax<<" "<<sum<<endl;

    return 0;
}
