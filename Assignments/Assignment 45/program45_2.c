// 2. First Occurrence Position
// Return position of first occurrence.

// int FirstOccur (PNODE Head, int No);

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

int FirstOccur(PNODE first, int no)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;

        if((first->data) == no)
        {
            return iCount;
        }

        first = first->next;
    }   

    return -1;
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

    iRet = FirstOccur(head, 20);

    if(iRet == -1)
    {
        printf("No number found\n");
    }
    else
    {
        printf("First Occurance is at : %d\n", iRet);
    }

    return 0;
}