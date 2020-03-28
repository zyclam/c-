#include <iostream>
#include   <stdlib.h>

using namespace std;

int main()
{
    int n;
    int a[101]= {0};


    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        for(int i=n-1; i > 0; i--)
        {
            for(int j=1; j<=i; j++)
                if(abs(a[j-1]) < abs(a[j]))
                {
                    int temp = a[j-1]; /* 交换两个相邻的数 */
                    a[j-1] = a[j];
                    a[j] = temp;
                }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
