#include<stdio.h>
#include<math.h>
#define SIZE 5
float mean(float a[], int b)
{
    int i;
    float sum=0.0;
    for(i=0;i<b;i++){
        sum = sum+a[i];
    }
	return (sum/(float)b);
}
float dev(float a[], int b){
    float x, sum =0.0;
    x=mean(a,b);
    for(int i=0;i<b;i++){
        sum += (x-a[i])*(x-a[i]);
    }
    return (sqrt(sum/(float) b)) ;
}
int main ()
{
    int i;
    float value [SIZE];
    printf("enter 5 element of the array: ");
    for(i=0;i<SIZE;i++){
    	scanf("%f",&value[i]);
    }
    printf("The std dev is: %f", dev(value,SIZE));

    
}