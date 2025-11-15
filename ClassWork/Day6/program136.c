#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequancyCalculate(int Arr[], int iSize, int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iCount++;
        }   
    }

    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength*sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memeory\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the number to calaulate frequency : \n");
    scanf("%d", &iValue);

    // Step 2 : Use the memory
    iRet = FrequancyCalculate(iPtr, iLength, iValue);
    printf("Frequency of %d is : %d", iValue, iRet);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}