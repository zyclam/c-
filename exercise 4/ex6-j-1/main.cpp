#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n,m; //有n个学生，每人考m门课
        cin>>n>>m;
        double a[51][6]={0};

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }//输入每个学生的各科成绩

        for(int i=0;i<n;i++)// 学生的平均成绩
        {
            double sum = 0;
            for(int j=0;j<m;j++)
            {
                sum += a[i][j];
            }
            printf("%.2lf",sum/m);


            if(i<n-1)
            printf(" ");
            else
            printf("\n");
        }

        double sub_ave[m];//平均成绩

        for(int j=0;j<m;j++)//平均成绩
        {
            double sum = 0;
            for(int i=0;i<n;i++)
            {
                sum += a[i][j];
            }
            sub_ave[j] = sum/n;
            printf("%.2lf",sum/n);

            if(j<m-1)
            printf(" ");
            else
            printf("\n");
        }

        int num=0;

        for(int i=0;i<n;i++)
        {
            int p=0;
            for(int j=0;j<m;j++)
            {
                if(a[i][j] >= sub_ave[j])
                p++;
            }
            if(p==m)  //五门课都过平均线
            num++;
        }

        printf("%d\n\n",num);

    }

