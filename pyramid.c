#include<stdio.h>
int main(){
    int n;
    printf("enter row number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            printf(" ");
        }

        for(int j=1;j<=2*(i+1)-1;j++){
            printf("*");
        }

        printf("\n");
    }
}