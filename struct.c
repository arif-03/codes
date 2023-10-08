#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float mark;
};
int main(){
    struct student ;
    int j;
    for(j=0;j<2;j++){
        printf("for roll: %d \n",j+1);
        printf("enter name: ");
        scanf("%s",&s[j].name);
        printf("enter marks: ");
        scanf("%f",&s[j].mark);


    }


    for(j=0;j<2;j++){
        printf("\nroll: %d \n",j+1);
        printf("name: ");
        puts(s[j].name);

        
        printf("marks:%f \n", s[j].mark);
       
    }


return 0;




}