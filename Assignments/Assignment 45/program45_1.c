// 1. Display Only Odd Elements
// Print only odd elements.

// void DisplayOdd (PNODE Head);

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

void DisplayOdd(PNODE first)
{
    while(first != NULL)
    {
        if((first->data)%2 != 0)
        {
            printf("%d\n", first->data);
        }

        first = first->next;
    }   
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 100);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);
    InsertFirst(&head, 10);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    DisplayOdd(head);

    return 0;
}