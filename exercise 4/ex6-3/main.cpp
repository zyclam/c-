#include <iostream>

using namespace std;

int main()
{
    int n,sum;

    while(1)
    {
        cin>>n;
        if (n==0) break;
        sum=1;
        for(n; n>1; n--)
        {
            sum=2*(sum+1);


        }

        cout<<sum<<endl;

    }
    return 0;
}
