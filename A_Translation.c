#include <stdio.h>
#include<string.h>
int main()
{
   int i,j;
   char string[100],s2[100];
    scanf("%s%s",string,s2);
    int lenth = strlen(string);
    int palindrome =1;
    for(i=0,j=lenth-1; i<lenth/2 ; i++,j--)
    {
        if(string[i] != s2[j])
        palindrome = 0;
    }

    if(palindrome){
        printf("YES\n");

    }
    else
    printf("NO");
    return 0;
}