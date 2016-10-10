/* Chapter 1.1
 * find the  K biggest Number In  N numbers
 * First pick K number into array b[]
 * Second Compare the other number with every member in b[] and find the position
 * Third assign the a[i] value to  the position b[c] and exchange the value after b[c] 
 */
#include "stdio.h"
int i=0;
main()
{
    int a[11]={1,3,57,8,9,23,54,12,45,19};
    int b[4]={0};
    int i=0,j=0,tmp=0,tmp2=0;
    int c=-1;

    for(;i<3;i++)
    {
         b[i]=a[i];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-i;j++)
        {
           if(b[j]<b[j+1])
           {
               tmp=b[j];
               b[j]=b[j+1];
               b[j+1]=tmp;
           }
        }
     }

     for(i=3;i<10;i++)
     {

            for(j=2;j>=0;j--)
            {
             /* printf("%d %d\n",a[i],b[j]);*/
                if(a[i]>b[j])
                {
                    c=j;
                }
                else
                {
                    ;
                }
                if(j==0)
                {
                    if(c>=0)
                    {
                        tmp=b[c];
                        b[c]=a[i];
                        for(;c<3;c++)
                        {
                            if(c==2)
                            {
                                continue;
                            }
                            else
                            {
                                tmp2=b[c+1];
                                b[c+1]=tmp;
                                tmp=tmp2;
                            }
                        }
    
                    }

                }

            }
            c=-1;
     }
     for(i=0;i<3;i++)
     {
         printf("%d\n",b[i]);
     }
     getch();

}

