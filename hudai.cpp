#include <stdio.h>
int main()
{
    int n;
    printf("Enter roe number:");
    scanf("%d", &n);
    for (int i = 0; i < n+1 ; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}