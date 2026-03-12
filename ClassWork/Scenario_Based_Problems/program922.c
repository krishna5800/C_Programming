#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckLoop(PNODE first)
{
    PNODE fast = NULL;
    PNODE slow = NULL;

    bool bFlag = false;

    fast = first;
    slow = first;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }

        slow = slow->next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int Pos = 0;
    int i = 0;
    bool bRet = false;

    Pos = 4;

    PNODE head = NULL;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);
    InsertLast(&head, 151);

    Display(head);

    temp1 = head;
    temp2 = head;

    // temp1 = temp1->next->next->next;
    for(i = 1; i < Pos; i++)
    {
        temp1 = temp1->next;
    }

    // temp2 = temp2->next->next->next->next->next->next;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    // To create the loop
    temp2->next = temp1;

    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("Their is Loop");
    }
    else
    {
        printf("Their is no Loop");
    }

    return 0;
}