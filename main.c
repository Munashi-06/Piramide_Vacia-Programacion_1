#include <stdio.h>

int main()
{
    // This program prints a pattern of 'X' characters in a specific format.
    // The pattern is determined by the variable 'n', which can be adjusted to change the size of the output.
    // The output consists of 'X' characters arranged in a triangular pattern with spaces in between
    int n=6;
    int e=n;
    int l=1;
    int d=0;
    int v=0;
    int o=n;
    int d2=1;
    while(l<=n)
    {
        d=d+1;
        if(d==e)
        {
            printf("X\n");
            d=0;
            e=e+1;
            l=l+1;
            v=0;
            o=o-1;
        }
        else if(d>v)
        {
            if(d==o)
            {
                printf("X");
                v=v+1;
                if(o==1)
                {
                    while(d2<e)
                    {
                        printf("X");
                        d2=d2+1;
                        l=l+1;
                    }
                }
            }
            while(v<d)
            {
                printf(" ");
                v=v+1;
            }
        }
    }
    return 0;
}