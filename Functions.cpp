#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function  ;
      int d = fabs(a-b);
      cout<<(*a+*b)<<endl<<d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    

    return 0;
}