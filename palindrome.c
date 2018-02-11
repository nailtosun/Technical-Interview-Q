//Write a function that gives 1 for palindrome words 0 otherwise
//Input can consist of both upper or lower case letter
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *str)
{
    int length = strlen(str);
    for(int i = 0; i<(length-1); i++)
    {
        if (str[i] == str[length-1-i])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

#ifndef RunTests
int main()
{
    int n;
    char *str = "Deleveled";
    n = strlen(str);
    char str2[n];
    for(int k = 0; k<n; k++)
    {
        *(str2+k) = tolower(*(str+k));
    }
    printf("%d", is_palindrome(str2));
}
#endif
