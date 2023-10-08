#include<stdio.h>
int main (){
    int arr[2][2] = {{6,6},{8,8}};
    int tras [2][2];

       for(int i=0;i<2;i++){
    for (int j = 0; j<2; j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
     }
     printf("\n");
     printf("\n");

     
    for(int i=0;i<2;i++)
    for (int j = 0; j <2; j++)
    {
        tras[i][j] =arr[j][i];
    }



     for(int i=0;i<2;i++){
    for (int j = 0; j<2; j++)
    {
      printf("%d ",tras[i][j]);
    }
    printf("\n");
     }
    
    return 0;
}