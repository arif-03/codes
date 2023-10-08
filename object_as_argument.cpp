#include<iostream>
using namespace std;

class Time{
    int hour;
    int min;
    public:
    void getTime(int h , int m){
        hour=h;
        min=m;
    }
    void print(void){
        cout<<hour<<" hour "<<min<<" mint";
    }
    void sum(Time,Time);

};
void Time::sum(Time t1,Time t2){
    min=t1.min+t2.min;
    hour=min/60;
    min=min%60;
    hour=hour+t1.hour+t2.hour;
}
int main(){
    Time T1,T2,T3;
    
    
}
