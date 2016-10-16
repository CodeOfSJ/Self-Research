/**************************************
* FileName --- main.c
* Author ----- sunj
* Date ------- 10ÔÂ 15 2016
*
*
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"
#define Test 0
main()
{
        List *head=NULL;
        init(&head);
        insert(head,10);
        insert(head,11);
        insert(head,12);
        insert(head,13);
        insert(head,14);
        deleteAsNum(head,12);
        printAll(head);
        clearList(head);
}

init(List **head)
{
    *head=(struct Node *)malloc(sizeof(struct Node));
    printf("initial success\n");
}
int insert(List *head,int num)
{
    List *p1,*p2=NULL;
    p1=(struct Node *)malloc(sizeof(struct Node));
    p1->num=num;
    if(head->next==NULL)
    {
        head->next=p1;
        p1->next=NULL;
    }
    else
    {
        p2=head->next;
        head->next=p1;
        p1->next=p2;
    }
    return 0;
}
printAll(List *p1)
{
    int num=0;
    
    while(1)
    {
        if(p1->next==NULL) 
        {
            printf("The List is empty\n");
            break;
        } 
        else 
        {
            p1=p1->next;
            printf("num:%d\n",p1->num);
            if(p1->next==NULL)
            {
                break;
            }
        }
        num++;
    }
}
deleteAsNum(List *p,int num)
{
    List *p1=p;
    List *p2=NULL;
    while(1)
    {
        p2=p1;
        if(p1->next!=NULL)
        {
            p1=p1->next;
        }
        if(p1->num==num)
        {
            if(p1->next==NULL)
            {
                free(p1);
                p2->next=NULL;
                break;
            }
            else
            {
                p2->next=p1->next;
            }
        }
        else
        {
           if(p1->next==NULL) 
           {
               break;
           }
        }


    }
}
clearList(List *p1)
{
    List *p2;
    if(p1->next==NULL)
    {
        printf("The List is empty\n");
    }
    while(1)
    {
        if(p1->next!=NULL)
        {
            p2=p1->next;
            free(p1);
            p1=p2;
        }
        if(p1->next==NULL)
        {
            free(p1);
            break;
        }
    }
    printf("clear List over\n");

}
