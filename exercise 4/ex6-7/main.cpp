#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
     int x,a[101],t=0;
     unsigned int n;
     cin >> n;
     for (int i = 0; i < n; i++)
    {
           cin >> a[i];
          
    }
      cin >> x;
     
      for (int i = 0; i < n; i++)
    {
           if (x < a[i])
        {
                for (int j = n; j >= i; j--)
                    
            {
                     a[j + 1] = a[j];
                     t++;
                    
            }
                a[i] = x;
                break;
               
        }
         
          
    }
      if (t == 0)
           a[n] = x;//x都比前面的大 不加这个放在尾部是错误的
      for (int i = 0; i <= n; i++)
    {
            cout << a[i] << " ";
           
    }
     
      cout << endl;
     
     
     return 0;
} //新手

 
 return 0;
}

