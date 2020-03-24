#include <iostream>
#include<math.h>
using namespace std;
int main( )
{
    int zhengshu,fushu,ling,n,i;
    double m;

        while(cin>>n)
        {
            if(n==0)break;
            zhengshu=0;
            fushu=0;
            ling=0;

            for(i=0; i<n; i++)
            {
                cin>>m;
                if(m>0){
                    zhengshu++;
                }
                else if( fabs(m- 0) < 1e-15){
                    ling++;
                }
                else if(m<0){
                    fushu++;
                }

            }
            cout<<fushu<<" "<<ling<<" "<<zhengshu<<endl;

        }



    return 0;
}
