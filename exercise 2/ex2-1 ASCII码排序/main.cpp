
#include "stdio.h"
char max(char a, char b)
{
if (a > b)
{
return a;
}
else
{
return b;
}
}
char min(char a, char b)
{
if (a < b)
{
return a;
}
else
{
return b;
}
}


int main(int argc, char const *argv[])
{
char c0, c1, c2, c3, c4, c5, c6, c7;
scanf("%c%c%c", &c0, &c1, &c2);
while( (c0!=0) && (c1!=0) && (c2!=0)){

c3 = max(c0,c1);
c4 = max(c3,c2);
c5 = min(c0,c1);
c6 = min(c5,c2);
c7 = c0 + c1 + c2 - c4 - c6;
printf("%c %c %c\n", c6, c7, c4);
printf("Please input num :\n");
scanf("%c%c%c", &c0, &c1, &c2);
}
return 0;
}

