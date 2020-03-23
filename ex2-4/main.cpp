#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main(){
double r;

cin>>r;

while( r!=0 ){
double v=abs(r);
cout<<fixed<<setprecision(2)<<v<<endl;
cin>>r;
}
}
