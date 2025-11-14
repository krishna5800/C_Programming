#include<stdio.h>
#include<stdlib.h>

float FindAvegare(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return (iSum/iSize);            // Issue it gives .00000 after decimal point
}

int main()
{
    int iLength = 0, iCnt = 0;
    float fRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)        
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    fRet = FindAvegare(ptr, iLength);

    printf("Average is : %f", fRet);

    free(ptr);

    return 0;
}