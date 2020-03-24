#include "stdio.h"

int main()
{
    char a, b, c;



    while( scanf("%c%c%c%*c", &a, &b, &c))
    {
        if ((a=='0') && (b=='0') && (c=='0')) break;

        if(a>b)
        {
            if(a>c)
            {
                if(b>c)
                {
                    printf("%c %c %c\n", c, b, a);

                }
                else
                {
                    printf("%c %c %c\n", b, c, a);
                }
            }
            else
            {
                printf("%c %c %c\n", b, a, c);
            }
        }
        else
        {
            if(b>c)
            {
                if(a>c)
                {
                    printf("%c %c %c\n", c, a, b);
                }
                else
                {
                    printf("%c %c %c\n", a, c, b);
                }
            }
            else
            {
                printf("%c %c %c\n", a, b, c);
            }
        }



    }
    return 0;
}


