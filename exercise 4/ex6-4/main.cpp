#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n ;

    while (1)
    {
        cin>>n;//ÆÀÎ¯ÈËÊý
        if(n==0)
            break;
        int score[101]= {0};
        int score_max=0;
        int score_min=101;
        long long sum=0;
        double score_final;


        for(int i=0; i<n; i++)
        {
            cin>>score[i];
            if(score[i]>score_max)
            {
                score_max=score[i];
            }
            if(score[i]<=score_min)
            {
                score_min=score[i];
            }
            sum+=score[i];
        }
        double a ;
        a=static_cast<double>(sum-score_max-score_min);
        score_final=a /(n-2);//?
        printf("%.2f\n",score_final);
    }



    return 0;
}
