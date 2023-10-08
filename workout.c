#include <stdio.h>

int main() {
    int n, i;
    int arr[100], *ptr;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    ptr = &arr[n-1];
    
    printf("The integers in reverse order are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;
    }
    
    return 0;
}
