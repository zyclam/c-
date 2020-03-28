#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
typedef long long int ll;
int a[7][4];
bool check(int a[][4]){
    for(int i = 1;  i <= 6; i++)
        for(int j = 1; j < 4; j++)
            if(a[i][j]!=a[i][j-1])
                return false;
    return true;
}
int dir[6][4] = {1,2,3,4,2,1,4,3,1,6,3,5,1,5,3,6,4,5,2,6,6,2,5,4};
int main(){
    int t;
    int s[7][4];
    cin >> t;
    while(t--)
	{
        for(int i = 1; i <= 6; i++)
            for(int j = 0; j < 4; j++)
                cin >> a[i][j];
        if(check(a)){
            puts("YES");
            continue;
        }
        int flag = 0;
        for(int i = 0; i < 2; i++){
            for(int j = 1; j <= 6; j++)
                for(int k = 0; k < 4; k++)
                    s[j][k] = a[j][k];
            for(int j = 0; j < 4; j++){
                int d = (j+1)%4;
                s[dir[i][d]][0] = a[dir[i][j]][0];
                s[dir[i][d]][2] = a[dir[i][j]][2];
            }
            if(check(s)){
                flag = 1;
            }
        }
        for(int i = 1; i <= 6; i++)
            for(int j = 0; j < 4; j++)
                s[i][j] = a[i][j];
        s[1][0] = a[6][0];
        s[1][1] = a[6][1];
        s[5][0] = a[1][0];
        s[5][1] = a[1][1];
        s[3][2] = a[5][1];
        s[3][3] = a[5][0];
        s[6][0] = a[3][3];
        s[6][1] = a[3][2];
        if (check(s)){
            flag = 1;
        }
        for(int i = 1; i <= 6; i++)
            for(int j = 0; j < 4; j++)
                s[i][j] = a[i][j];
        s[6][0] = a[1][0];
        s[6][1] = a[1][1];
        s[1][0] = a[5][0];
        s[1][1] = a[5][1];
        s[5][1] = a[3][2];
        s[5][0] = a[3][3];
        s[3][3] = a[6][0];
        s[3][2] = a[6][1];
        if(check(s))
            flag = 1;
        for(int i = 1; i <= 6; i++)
            for(int j = 0; j < 4; j++)
                s[i][j] = a[i][j];
        s[2][0] = a[6][2];
        s[2][1] = a[6][0];
        s[5][3] = a[2][1];
        s[5][1] = a[2][0];
        s[4][2] = a[5][3];
        s[4][3] = a[5][1];
        s[6][0] = a[4][2];
        s[6][2] = a[4][3];
        if(check(s))
            flag = 1;
        for(int i = 1; i <= 6; i++)
            for(int j = 0; j < 4; j++)
                s[i][j] = a[i][j];
        s[6][2] = a[2][0];
        s[6][0] = a[2][1];
        s[2][1] = a[5][3];
        s[2][0] = a[5][1];
        s[5][3] = a[4][2];
        s[5][1] = a[4][3];
        s[4][2] = a[6][0];
        s[4][3] = a[6][2];
        if(check(s))
            flag = 1;
        flag?puts("YES"):puts("NO");
    }
    return 0;
}
