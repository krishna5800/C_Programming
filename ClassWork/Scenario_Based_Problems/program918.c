#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }

    printf("NULL \n");
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        temp = (*first);
            
        while(temp->next != NULL)       // type 2
        {
            temp = temp->next;
        }

        temp->next = newn; 
    }
}

// Time_Complexity = N + N/2
int MiddleElement(PNODE first)
{
    int iCount = 0;
    int iMiddle = 0;

    PNODE temp = NULL;

    temp = first;

    while(temp != NULL)         // N
    {
        iCount++;
        temp = temp->next;
    }

    temp = first;

    iMiddle = iCount/2 + 1;

    for(int i = 1; i < iMiddle; i++)            // N/2
    {
        temp = temp->next;
    }

    return temp->data;
}

int MiddleElementX(PNODE first)
{
    PNODE fast = NULL;
    PNODE slow = NULL;

    fast = first;
    slow = first;

    while(fast != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 111);

    Display(head);

    iRet = MiddleElementX(head);
    printf("Middel elements is : %d\n", iRet);

    return 0;
}