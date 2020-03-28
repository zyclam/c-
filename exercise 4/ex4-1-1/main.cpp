#include <iostream>

using namespace std;

int main()
{
    int S[13]={0};
    int H[13]={0};
    int C[13]={0};
    int D[13]={0};


    int Si,Hi,Ci,Di,cards,number;
    cin>>cards;
    char suit;

    for(int i=0;i<cards;i++){
       cin>>suit>>number;
       if(suit=='S'){
        S[number-1]=1;
       }

        else if(suit=='H'){

        H[number-1]=1;
        }

        else if(suit=='C'){


        C[number-1]=1;
        }
        else if(suit=='D'){


        D[number-1]=1;
        }

    }
    for (int k1=0; k1<13;k1++ ){
       if(S[k1]==0){
        cout<<'S'<<" "<<k1+1<<endl;
       }

    }
     for (int k2=0; k2<13;k2++ ){
       if(H[k2]==0){
        cout<<'H'<<" "<<k2+1<<endl;
       }
     }
      for (int k3=0; k3<13;k3++ ){
       if(C[k3]==0){
        cout<<'C'<<" "<<k3+1<<endl;
       }
      }
       for (int k4=0; k4<13;k4++ ){
       if(D[k4]==0){
        cout<<'D'<<" "<<k4+1<<endl;
       }
       }


    return 0;
}
