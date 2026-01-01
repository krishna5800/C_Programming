// 4. Display Prime Numbers

// void DisplayPrime (PNODE Head);

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

void DisplayPrime(PNODE first)
{
    int iCnt = 0;
    int iNo = 0;
    bool bAns = false;

    while(first != NULL)
    {
        iNo = first->data;
        bAns = false;

        if(iNo == 0 || iNo == 1)
        {
            printf("%d is not prime number\n");
            first = first->next;
            continue;
        }
        
        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo%iCnt == 0)
            {
                bAns = true;
                break;
            }
        }

        if(bAns == true)
        {
            printf("%d is not prime number\n", first->data);
        }
        else
        {
            printf("%d is prime number\n", first->data);
        }

        first = first->next;
    }
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

    DisplayPrime(head);

    return 0;
}