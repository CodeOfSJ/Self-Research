#include "stdio.h"
main()
{
    int a[10]={1,2,3,4,5,6,7,8};

    int low=0,midl=0,high=7;
    int b=6;
    while(low<=high)
    {
        midl=(low+high)/2;
        if(a[midl]<b)
        {
            low=midl+1;
        }
        else if(a[midl]>b)
        {
            high=midl-1;
        }
        else
        {
            printf("%d",b)  ;
            getch();
            return midl;

        }


    }
    getch();
    return -1;


}
