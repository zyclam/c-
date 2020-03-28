#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main()
{
    int n,m;
    double a[10001];
    double sum;

    while(1){
             cin>>n>>m;
     if (n==0 && m==0) break;

     a[0]=n;
     sum=a[0];

     for(int i=0;i<m-1;i++)
        {
            a[i+1]=sqrt(a[i]);
            sum+=a[i+1];
        }

    printf("%.2f\n",sum);

    }
    return 0;
}
