// make a dictionary work reverse (reverse sort)
// in 10 min

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void swap(char **str, char **str2)
{
    int tmp = *str;
    *str = *str2;
    *str2 = tmp;
}
void compare(int a,int b, char *words[])
{
  if (words[a][b] < words[a+1][b])
  {
     swap(&words[a], &words[a+1]);
  }
  else if(words[a][b] == words[a+1][b])
  {
    compare(a,++b,words);
  }
}
void sort_words(char *words[], int count) //I used bubble sort algoritm
{   int b = 0;
    int i, j;
    for (i = 0; i < count-1; i++)
    {
       for (j = 0; j < count-i-1; j++)
       {
         compare(j,b,words);
        }
    }
}
#ifndef RunTests
int main()
{
    char *words[] = { "cherry", "orange", "apple", "foo","bar","baar"};
    int count = sizeof(words) / sizeof(words[0]);
    sort_words(words, count);

    for (int i = 0; i < count; i++)
    {
        printf("%s ", words[i]);
    }
}
#endif
