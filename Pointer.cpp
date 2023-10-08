#include <>
#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    
      int d = fabs(*a-*b);
      cout<<(*a+*b)<<endl<<d;
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    update(&a, &b);
    
    return 0;
}