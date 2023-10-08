#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    while(1){
    int gus,random;
    cout<<"random number between 1 to 5"<<endl;
    cin>>gus;
    random = 1+ rand()%5;
    if(gus==random)
    {
        cout<<"you won"<<endl;
        break;
    }
    else{
        cout<<"you lost, try again "<< endl;
        cout<<"random number was = "<<random<< endl;
    }

    }
    return 0;

}
