#include <iostream>
#include   <stdlib.h>
using namespace std;

int main()
{
   int m,n,mi,mj,mmax;

   int a[101][101]={0};
   cin>>m>>n;
   for (int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>a[i][j];

       }
   }

    mmax=abs(a[0][0]);
    for (int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(abs(a[i][j])>mmax )
           {
               mmax=abs(a[i][j]);
               mi=i+1;
               mj=j+1;
           }

       }
   }


   cout<<mi<<" "<<mj<<" "<<a[mi-1][mj-1]<<endl;
    return 0;
}
