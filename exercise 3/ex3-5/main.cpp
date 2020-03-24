#include <iostream>

using namespace std;

int main()
{
    int height,width;
    int i,k,k1,k2,k3;

    cin>>height>>width;
    while(width!=0 || height!=0)
    {

        for(i=1; i<=height; i++)
        {
            if(i%2==1)
            {
                if(width%2==1)
                {

                    for(k=1; k<=width/2; k++)
                    {
                        cout<<'#。';
                    }
                    cout<<'#'<<endl;
                }
                if(width%2==0)
                {
                    for(k1=1; k1<=width/2; k1++)
                    {
                        cout<<'#。';
                    }
                    cout<<endl;
                }
            }
            else if(i%2==0)
            {
                 if(width%2==1)
                {

                    for(k2=1; k2<=width/2; k2++)
                    {
                        cout<<'。#';
                    }
                    cout<<'。'<<endl;
                }
                if(width%2==0)
                {
                    for(k3=1; k3<=width/2; k3++)
                    {
                        cout<<'。#';
                    }
                    cout<<endl;
                }

            }
        }
    }


    return 0;
}
