#include <iostream>

using namespace std;
int score,timea;
int main()
{
    cin>>timea;
    while(timea>0){
        int count=0;
        cin>>score;
        while (count<=timea){
                if (score<60){
                cout<<"E"<<endl;
                count++;
            }
            else if (score<70){
                cout<<"D"<<endl;
                count++;
            }
            else if (score<80){
                cout<<"C"<<endl;
                count++;
            }
            else if (score<90){
                cout<<"B"<<endl;
                count++;
            }
            else if (score<101){
                cout<<"A"<<endl;
                count++;
            }
             else if (score>100){
                cout<<"Score is error!"<<endl;
                count++;
            }
        if(count>=timea)break;
        cin>>score;


        }

   if(count>=timea)break;


    }

    return 0;
}
