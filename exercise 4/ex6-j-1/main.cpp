#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n,m; //��n��ѧ����ÿ�˿�m�ſ�
        cin>>n>>m;
        double a[51][6]={0};

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }//����ÿ��ѧ���ĸ��Ƴɼ�

        for(int i=0;i<n;i++)// ѧ����ƽ���ɼ�
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

        double sub_ave[m];//ƽ���ɼ�

        for(int j=0;j<m;j++)//ƽ���ɼ�
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
            if(p==m)  //���ſζ���ƽ����
            num++;
        }

        printf("%d\n\n",num);

    }

