// 2. Count Numbers Less Than X
// Count elements less than given number

// int CountLess (PNODE Head, int X);

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

int CountLess(PNODE first, int x)
{
    int iCount = 0;

    while(first != NULL)
    {
        if((first->data) < x)
        {
            iCount++;
        }

        first = first->next;
    }   

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 20);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);
    InsertFirst(&head, 10);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    iRet = CountLess(head, 20);

    printf("Count of smaller numbers is : %d\n", iRet);

    return 0;
}