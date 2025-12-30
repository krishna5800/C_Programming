// 3. Check Whether List is Empty
// Return true if list is empty,

// bool IsEmpty (PNODE Head);

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool IsEmpty(PNODE first)
{
    int iAns = 0;

    iAns = Count(first);

    if(iAns == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    bool bRet = false;

    // InsertFirst(&head, 111);
    // InsertFirst(&head, 101);
    // InsertFirst(&head, 51);
    // InsertFirst(&head, 21);
    // InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    bRet = IsEmpty(head);

    if(bRet == true)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List is not empty\n");
    }

    return 0;
}