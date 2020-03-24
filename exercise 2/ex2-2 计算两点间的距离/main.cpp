#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
int x1,y1,x2,y2;

cin>>x1>>y1>>x2>>y2;

while( (x1!=0) || (y1!=0) || (x2!=0)||(y2!=0)){
int heng=pow(x1-x2,2);
int zong=pow(y1-y2,2);
double length=pow(heng+zong,0.5);
cout<<fixed<<setprecision(2)<<length<<endl;
cin>>x1>>y1>>x2>>y2;
}
}
