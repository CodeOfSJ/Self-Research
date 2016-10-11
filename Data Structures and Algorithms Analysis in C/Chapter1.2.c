/*   1 2 3 4
 * 1 t h i s
 * 2 w a t s
 * 3 o a h g
 * 4 f g d t
 *
 * find the target words from the matrix
*/
#include "stdio.h"

char source[4][5]={{"this"},{"wats"},{"oahg"},{"fgdt"}};
char target[][5]={{"this"},{"fat"},{"that"},{"two"}};
main()
{


        char tmp[5];
        int i=0,j=0;
        int a=0,b=0,c=0;


        int target_row=sizeof(target)/sizeof(target[0]);

        memset(tmp,0x00,sizeof(tmp));

        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                source[i][j];
                /*right*/
                memset(tmp,0x00,sizeof(tmp));
                for(a=j;a<4;a++)
                {
                    tmp[b]=source[i][a];
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
                /*left*/
                memset(tmp,0x00,sizeof(tmp));
                 for(a=j;a>=0;a--)
                {
                    tmp[b]=source[i][a];
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
                /*top*/
                memset(tmp,0x00,sizeof(tmp));
                for(a=i;a>=0;a--)
                {
                    tmp[b]=source[a][j];
                  /*  printf("%d %d %d %s|",i,j,a,tmp);*/
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
                /*down*/
                memset(tmp,0x00,sizeof(tmp));
                for(a=i;a<4;a++)
                {
                    tmp[b]=source[a][j];
                  /*  printf("%d %d %d %s|",i,j,a,tmp);*/
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
                /*right&top*/
                memset(tmp,0x00,sizeof(tmp));
                for(a=j,c=i;a<4&&c>=0;a++,c--)
                {
                    tmp[b]=source[c][a];
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
                /*right&down*/
                memset(tmp,0x00,sizeof(tmp));
                for(a=j,c=i;c<4&&a<4;a++,c++)
                {
                    tmp[b]=source[c][a];
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
                /*left&top*/
                memset(tmp,0x00,sizeof(tmp));
                for(a=j,c=i;c>=0&&a>=0;a--,c--)
                {
                    tmp[b]=source[c][a];
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
                /*left&down*/
                memset(tmp,0x00,sizeof(tmp));
                for(a=j,c=i;c<4&&a>=0;a--,c++)
                {
                    tmp[b]=source[c][a];
                    compare(tmp,target_row);
                    b++;
                }
                b=0;
            }
        }


        getch();
}
compare(char *word,int row)
{
    int i=0;
    for(;i<row;i++)
    {
        if(!strcmp(word,target[i]))
        {
            printf("%s\n",word);
        }
    }
}

