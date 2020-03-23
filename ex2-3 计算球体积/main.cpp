#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;



int main()
{
    double r;
    cin>>r;

    double zhouchang= 2*M_PI*r;
    double square= M_PI*r*r;

    cout<< fixed<<setprecision(5)<<square<<" "<<zhouchang<<endl;
    //printf("%.6lf %.6lf\n",zhouchang,square);

    return 0;
}




