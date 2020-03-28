#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        m=2*i+1;
        for (int t=0;t<m;t++)
        {

            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
