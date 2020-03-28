#include <iostream>
#include   <stdlib.h>

using namespace std;

int main()
{
   int row,line,mj,mi;
   int a[100][100]={0};
   cin>>row>>line;
   int mmax=0;
  for(int j=0;j<line;j++)
  {
       for(int i=0;i<row;i++)
   {
       cin>>a[j][i];
       if(abs(a[j][i])>mmax)
       {
           mmax=a[j][i];
           mj=j;
           mi=i;
       }
   }


  }

  cout<<mj<<" "<<mi<<" "<<a[mj][mi]<<endl;
    return 0;
}
