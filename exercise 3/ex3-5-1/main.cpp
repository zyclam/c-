#include <iostream>

using namespace std;



int main()
{
    int height,width;
    int i,k,k1;

    cin>>height>>width;
    while(width!=0 || height!=0)
    {

        for(i=1; i<=height; i++)
        {
            if(i%2==1){
                for(k=1; k<=width/2; k++)
                    {
                        cout<<"#.";
                    }

                if(width%2==0){
                    cout<<endl;
                }
                else{
                   cout<<"#"<<endl;
                }

            }
            else{
                for(k1=1; k1<=width/2; k1++)
                    {
                        cout<<".#";
                    }

                if(width%2==0){
                    cout<<endl;
                }
                else{
                   cout<<"."<<endl;
                }
            }


        }
    cout<<endl;
    cin>>height>>width;
    }




return 0;
}


