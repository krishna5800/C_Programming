// 3. Sum of Digits of Each Node

// void SumDigits (PNODE Head)

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

void SumDigits(PNODE first)
{
    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;

    while(first != NULL)
    {
        iNo = first->data;
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo%10;
            iSum = iDigit + iSum;
            iNo = iNo/10;
        }

        printf("%d : %d\n", first->data, iSum);

        first = first->next;
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

    SumDigits(head);

    return 0;
}