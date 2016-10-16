#ifndef List
typedef struct Node List;

init(List **head);
int insert(List *head,int num);
printAll(List *p1);
deleteAsNum(List *p,int num);
deleteAsSeq(List *p1,int seq);
clearList(List *p1);

#endif

struct Node
{
        int num;
        struct Node *next;
};

