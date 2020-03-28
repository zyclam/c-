#include <iostream>

using namespace std;

int main()
{

    int n,m;
    int cut;
    int a[101]={0};

    while(1)
    {
        cin>>n>>m;
        if (n==0 && m==0) break;

         for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(m>a[i]){
                cut = i;
            }
        }

        for(int i=0;i<=cut;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<m<<" ";
        for(int i=cut+1;i<n;i++)
        {
            cout<<a[i]<<" ";
        }




        cout<<endl;
    }




    return 0;
}
