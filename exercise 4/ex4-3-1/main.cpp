#include <iostream>
# include <stdio.h>
using namespace std;

int main()
{
  int n,b,f,r,v;
    int build1[3][10]={0};
    int build2[3][10]={0};
    int build3[3][10]={0};
    int build4[3][10]={0};

  cin>>n;
  for(int i=0;i<n;i++){
      cin>>b>>f>>r>>v;
      if(b==1){
        build1[f-1][r-1]=v;
      }
      else if(b==2){
        build2[f-1][r-1]=v;
      }
      else if(b==3){
        build3[f-1][r-1]=v;
      }
      else if(b==4){
        build4[f-1][r-1]=v;
      }
  }


  //Êä³ö

    for (int i=0; i<3; ++i)
    {
        for (int j=0; j<10; ++j)
        {
              cout<<" "<<build1[i][j];
        }
       cout<<endl;
    }
    for(int k=0;k<20;k++){
        cout<<"#";
    }
  cout<<endl;
    //build2
     for (int i=0; i<3; ++i)
    {
        for (int j=0; j<10; ++j)
        {
              cout<<" "<<build2[i][j];
        }
       cout<<endl;
    }
    for(int k=0;k<20;k++){
        cout<<"#";
    }
  cout<<endl;
    //build3
     for (int i=0; i<3; ++i)
    {
        for (int j=0; j<10; ++j)
        {
              cout<<" "<<build3[i][j];
        }
       cout<<endl;
    }
     for(int k=0;k<20;k++){
        cout<<"#";
    }
  cout<<endl;
//build4
for (int i=0; i<3; ++i)
    {
        for (int j=0; j<10; ++j)
        {
            // printf("%1d\x20", build4[i][j]);
            cout<<" "<<build4[i][j];
        }
       cout<<endl;
    }
    return 0;
}
