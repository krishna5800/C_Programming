// Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || 
       cValue == 'I' || cValue == 'O' || 
       cValue == 'U' || cValue == 'a' ||
       cValue == 'e' || cValue == 'i' ||
       cValue == 'u' || cValue == 'o' 
      )
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
    char cValue = '\0';
    bool bRet =  false;

    printf("Enter Character :\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);
    
    if(bRet == true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}