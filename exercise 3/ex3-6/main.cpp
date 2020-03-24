/*
discription：
In programming languages like C/C++, a goto statement provides an unconditional jump from the "goto" to a labeled statement. For example, a statement "goto CHECK_NUM;" is executed, control of the program jumps to CHECK_NUM. Using these constructs, you can implement, for example, loops.

Note that use of goto statement is highly discouraged, because it is difficult to trace the control flow of a program which includes goto.

Write a program which does precisely the same thing as the following program (this example is wrtten in C++). Let's try to write the program without goto statements.
void call(int n){
  int i = 1;
 CHECK_NUM:
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
 INCLUDE3:
  if ( x % 10 == 3 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if ( x ) goto INCLUDE3;
 END_CHECK_NUM:
  if ( ++i <= n ) goto CHECK_NUM;

  cout << endl;
}
transla：这类似于我们玩的一个游戏，找3（打印1~n之间，3的倍数以及数字组成中带有3的数字）

input : 30
output:  3 6 9 12 13 15 18 21 23 24 27 30
*/


#include <iostream>

using namespace std;

int main()
{
   int n,i;
   cin>>n;
   for(i=1;i<=n;i++){
    if(i%3==0){
        cout<<" "<<i;
    }
    else if(i%10==3){
            cout<<" "<<i;
    }
   }
cout<<endl;

    return 0;
}

//事实上，上面的代码虽然可以通过OJ，但是在1300，230之类的数据上不能实现我们想要实现的功能
//所以，我们引入如下的循环
#include <iostream>
using namespace std;
bool has3(int n)
{
    if(n%3==0)return 1;
    while(n)
    {
        if(n%10==3)return 1;
        n/=10;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for (int i=3;i<=n;i++)
        if(has3(i)) printf(" %d",i);
    printf("\n");
    return 0;
}




