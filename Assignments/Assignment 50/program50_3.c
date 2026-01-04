// 3. Check Whether List Is Sorted (Ascending order)

// bool CheckSorted (PNODE Head);

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

bool CheckSorted(PNODE first)
{
    PNODE temp = NULL;
    int iVerify = 0;
    bool bAns = false;

    temp = first;
    iVerify = temp->data;

    while(temp != NULL)
    {
        if(temp->data >= iVerify)
        {
            temp = temp->next;
        }
        else
        {
            bAns = true;
            break;
        }
    }

    return bAns;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    bool bRet = false;

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

    bRet = CheckSorted(head);

    if(bRet == true)
    {
        printf("Not in Ascending Order\n");
    }
    else
    {
        printf("In Ascending Order\n");
    }

    return 0;
}