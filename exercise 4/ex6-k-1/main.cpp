/*#include <stdio.h>

int main()
{
    for( unsigned n,m,b; b=0, scanf("%u%u",&n,&m)==2; )
    {
        for( unsigned i=0; i!=n/m; ++i )
            printf( "%s%u", " "+(b++==0), m+1+i*2*m );
        if( n%m != 0 )
            printf( "%s%u", " "+(b++==0), n/m*m+1+n );
        printf( "\n" );
    }

    return 0;
}
*/
#include <iostream>

using namespace std;

#include <stdio.h>

int main()
{
    int n, m;

    while(1)
    {
        cin>>n>>m;
        if(n==0 && m==0)
            break;

        int sum=0, ai=2, count=0;

        for(int i=1; i<=n; i++)
        {
            sum += ai;
            ai += 2;   //ʵʱ���������Ƕ��٣��ӵ��ĸ�����


            if( i % m == 0)//m����Ϊһ��С��
            {
                count++;
                if(count != 1)//�ʼ�����0
                {
                    cout<<" ";
                }

                printf("%d", sum / m);

                // ������
                sum = 0;
            }
        }


        if(n % m == 0)
            cout<<endl;
        else
            printf(" %d\n", sum / (n % m));
    }

    return 0;
}

