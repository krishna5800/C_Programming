// 2. Display Elements Greater Than Average

// void DisplayGreater ThanAvg (PNODE Head);

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

void DisplayGreaterThanAvg(PNODE first)
{
    int iSum = 0;
    int iSize = 0;
    float iAvg = 0.0f;
    PNODE temp = NULL;

    iSize = Count(first);
    temp = first;

    while(temp != NULL)
    {
        iSum = iSum + (temp->data);
        temp =  temp->next;
    }

    iAvg = (float)iSum/(float)iSize;

    temp = first;

    while(temp != NULL)
    {
        if((float)temp->data > iAvg)
        {
            printf("%d\n", temp->data);
        }

        temp = temp->next;
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

    DisplayGreaterThanAvg(head);

    return 0;
}