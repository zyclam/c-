#include <iostream>

using namespace std;

int main()
{
    int height,width;
    int i,k,k1,k2;

    cin>>height>>width;

    while(width!=0 || height!=0)
    {
        for(k1=1; k1<=width; k1++)
        {
            cout<<'#';
        }
        cout<<endl;
        for(i=2; i<height; i++)
        {
            cout<<'#';
            for(k=2; k<width; k++)
            {
                cout<<'.';
            }
            cout<<'#'<<endl;
        }
        for(k2=1; k2<=width; k2++)
        {
            cout<<'#';
        }
        cout<<endl;
        cout<<endl;
        cin>>height>>width;
    }
    return 0;
}
