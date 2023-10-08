#include <stdio.h>

int main() {
   
   int x = 10;  // A variable x with value 10
int *p;      // A pointer p to an integer

p = &x;      // Assign the address of x to p

printf("Value of x: %d\n", x);   // Output: Value of x: 10
printf("Address of x: %p\n", &x); // Output: Address of x: 0x7ffc883deadc
printf("Value of p: %p\n", p);   // Output: Value of p: 0x7ffc883deadc
printf("Value pointed by p: %d\n", *p); // Output: Value pointed by p: 10



    return 0;
}
