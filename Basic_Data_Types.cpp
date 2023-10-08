#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long s;
    char d;
    float f;
    double g;
    scanf("%d %ld %c %f %lf",&a,&s,&d,&f,&g);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,s,d,f,g);
    return 0;
}