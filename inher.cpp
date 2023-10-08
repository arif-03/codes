#include<iostream>
using namespace std;
class student
{
private:
    int roll;
public:

    void get_number(float);
    void display_roll_number(void);
};

void student::get_number(float a)
{
    roll=a;
}

void student::display_roll_number()
{
    cout<<"Roll = "<<roll<<endl;
}
class test: public student {
    protected:
    float sub1,sub2;
    public:
    void get_marks(float,float);
    void display_marks(void);
};
void test:: get_marks(float a , float b){
    sub1=a;
    sub2=b;
}
void test::display_marks(){
    cout<<"Marks in sub1 = "<<sub1<<endl;
    cout<<"Marks in sub2 = "<<sub2<<endl;
}
class final:public test{
    float total;
    public:
    void display(void);
};
void final::display(){
    total = sub1+sub2;
    display_roll_number();
    display_marks();
    cout<<"Total marks = "<<total<<endl;

}
int main(){
    final X;
    X.get_marks(88.6,77.7);
    X.get_number(03);
    X.display();
    return 0;
}
