// 1. Print List in Reverse Order

// void DisplayReverse (PNODE Head);

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

void DisplayReverse(PNODE first)
{
    int iSize = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    int *verify = NULL;

    iSize = Count(first);

    int *ptr = NULL;

    ptr = (int*)malloc(iSize*sizeof(int));

    temp = first;
    verify = ptr;

    while(temp != NULL)
    {
        (*verify) = temp->data;
        temp = temp->next;
        verify++;
    }

    iCnt = 0;

    while(iCnt < (iSize-1))
    {
        ptr++;
        iCnt++;
    }

    for(iCnt = (iSize-1); iCnt >= 0; iCnt--)
    {
        printf("%d\n", (*ptr));
        ptr--;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    printf("LL in reverse order : \n");

    DisplayReverse(head);

    return 0;
}