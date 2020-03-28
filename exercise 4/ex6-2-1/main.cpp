#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
    int x,y,sum;
    int t=1;
    while(1)
    {
        cin>>x>>y;
        if (x==0 && y==0)
            break;
        for(int i=x; i<=y; i++)
        {
            sum= pow(i,2)+i+41;//式子计算结果

            if (sum<2)
            {
                t=0;
            }


            for (int i = 2; i < sqrt(sum)+1; i++)
                if (sum%i == 0)
                {
                    t = 0;
                    break;
                }
        }

        if (t)
        {
            cout <<  "OK" << endl;
        }
        else
        {
            cout << "Sorry" << endl;
        }
    }


}
