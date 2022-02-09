#include<stdio.h>
int main()
{   int c = 0;
    double n =0;
    while((c = getchar())!= EOF)
        ++n;
    printf("%.0f\n",n);
}
