#include <stdio.h>

#define SIZE 5

int main() {
    int a[SIZE];
    int i, j, temp;

    // Read input elements
    printf("Enter %d elements: ", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

   for (i = 0; i < SIZE-1; i++)
   {
    for(j=0;j<SIZE-1-i;j++){
        if (a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1] = temp;
        }
        
    }
   }
   
    // Print sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
