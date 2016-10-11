#include "stdio.h"
main()
{
    
    printf("%d\n",F(2));
    getch();
}
int F(int n)
{
    if(n==0)
    {
        return 0;

    }
    else
    {
        return 2*F(n-1)+n*n;
    }
}
