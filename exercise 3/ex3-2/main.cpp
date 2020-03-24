#include <iostream>

using namespace std;
int main()
{
    int a[1000];
    long long sum,max,min;
    int i,n;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i+1]>a[i])
        {
            max=a[i];
        }
        else if(a[i+1]<=a[i])
        {
            min=a[i];
        }


    }
    cout <<max <<" "<<min <<" "<<sum <<endl;
    return 0;
}
