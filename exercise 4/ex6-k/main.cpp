#include <iostream>

using namespace std;

int main()
{
    int n,m;
    double a[101]= {0};
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        a[i]=2+2*i;
    }
    int c=0;
    double sum=0;
    for (int j=0; j<n; j++)
    {
        for(int i=c; i<m+c; i++)
        {
            sum+=a[i];
        }

        sum/=m;
       cout<<sum<<" ";
         c+=m;
        if(c+m>n)
        {
          for(int i=c;i<n;i++)
          {
              sum+=a[i];
          }
          cout<<sum/(n-c);
        }

    }
    cout<<endl;
    return 0;
}
