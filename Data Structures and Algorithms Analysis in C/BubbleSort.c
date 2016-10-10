/*use bubble sort find the biggest 3 numbers*/
#include "stdio.h"
main()
{
     int a[11]={1,3,57,8,9,23,54,12,45,19};
     int b=4;
     int i=0,j=0,tmp=0;
     for(;i<9;i++)
     {
        for(j=0;j<9-i;j++)
        {
           if(a[j]<a[j+1])
           {
               tmp=a[j];
               a[j]=a[j+1];
               a[j+1]=tmp;
           }
        }
     }
     for(i=0;i<3;i++)
     {
         printf("%d\n",a[i]);
     }
     getch();
}

