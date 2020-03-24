/*
问题 A: Simple Calculator
Description:Write a program which reads two integers a, b and an operator op, and then prints the value of a op b.
The operator op is '+', '-', '*' or '/' (sum, difference, product or quotient). The division should truncate any fractional part.
Translet : 四则运算（整除去余）

The input consists of multiple datasets. Each dataset is given in the following format.
a op b
The input ends with a dataset where op = '?'. Your program should not process for this dataset.
For each dataset, print the value in a line.

Input:
1 + 2
56 - 18
13 * 2
100 / 10
27 + 81
0 ? 0

Output:
1 + 2
56 - 18
13 * 2
100 / 10
27 + 81
0 ? 0
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b,result;
    char operator_sign;
    cin>>a>>operator_sign>>b;
    while(operator_sign!='?'){

            switch(operator_sign){
            case'+':
                result=a+b;
                cout<<result<<endl;
                break;
            case'-':
                result=a-b;
                cout<<result<<endl;
                break;
            case'*':
                result=a*b;
                cout<<result<<endl;
                break;
            case'/':
                result=a/b;
                cout<<result<<endl;
                break;
            default:break;

            }
            cin>>a>>operator_sign>>b;
    }

    return 0;
}
