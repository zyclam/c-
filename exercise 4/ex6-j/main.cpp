#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double a[50][5];
    double student_mark[50];
    double lesson_mark[5];

    int student,mark;
    cin>>student>>mark;
    for(int i=0;i<student;i++)
    {
        for(int j=0;j<mark;j++)
        {
            cin>>a[i][j];

            student_mark[i]+=a[i][j];
            lesson_mark[j]+=a[i][j];
        }
    }

    for(int i=0;i<student;i++)
    {
      student_mark[i]/=mark;
       printf("%.2f ",student_mark[i]);//*1.0/mark

    }
    printf("\n");
    for(int j=0;j<mark;j++)
    {
       lesson_mark[j]/=student;
        printf("%.2f ",lesson_mark[j]);//*1.0/student
    }
     printf("\n");
    int sum=0;

    for (int  i = 0; i < student; i++) {
			if (a[i][0] >=  lesson_mark[1] && a[i][1] >=  lesson_mark[2] && a[i][2] >=  lesson_mark[3] && a[i][3] >=  lesson_mark[4] && a[i][4] >=  lesson_mark[5]) {
				sum++;
			}
		}

    cout<<sum<<endl;
    return 0;
}
