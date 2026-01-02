// 1. Find Difference (Max - Min)

// int Difference (PNODE Head);

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        newn->next = (*first);
        (*first) = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | ->",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

int Difference(PNODE first)
{
    int iMax = 0;
    int iMin = 0;

    iMax = first->data;
    iMin = first->data;

    while(first != NULL)
    {
        if(iMax < first->data)
        {
            iMax = first->data; 
        }

        if(iMin > first->data)
        {
            iMin = first->data;
        }

        first = first->next;
    }

    return (iMax-iMin);
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 111);
    InsertFirst(&head, 102);
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 28);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    InsertFirst(&head, 10);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    iRet = Difference(head);

    printf("Difference is : %d\n", iRet);
    
    return 0;
}