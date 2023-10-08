#include <stdio.h>
#include<string.h>
int main()
{
   int i,j;
   char string[100];
    scanf("%s",string);
    int lenth = strlen(string);
    int palindrome =1;
    for(i=0,j=lenth-1; i<lenth/2 ; i++,j--)
    {
        if(string[i] != string[j])
        palindrome = 0;
    }

    if(palindrome){
        printf("yes\n");

    }
    else
    printf("no");
    return 0;
}