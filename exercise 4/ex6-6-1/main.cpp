#include <iostream>

using namespace std;

int main()
{
    int n,mini;


    mini=100000;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int numbers[101]= {0};
        for(int i=0; i<n; i++)
        {
            cin>>numbers[i];
            if( numbers[i]<mini)
            {
                mini=numbers[i];
            }
        }
        for(int i=0; i<n; i++)
        {

            if( numbers[i]==mini)
            {
                int tempt;
                tempt=numbers[0];
                numbers[0]=numbers[i];
                numbers[i]=tempt;

                for (int k=0; k<n; k++)
                {
                    cout<<numbers[k]<<" ";
                }

            cout<<endl;
            }

        }

    }
}

