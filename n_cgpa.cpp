#include <bits/stdc++.h>
using namespace std;
class student
{
string name;
int roll;
public:
void put_student_info()
{
    cout<<"Enter student name:"<<endl;
    cin>>name;
    cout<<"Enter student roll:"<<endl;
    cin>>roll;
}
  float gpa[10];
    int numbers[10];
  public:
    float get_gpa(int n)
    {
        if(n>=80 && n<=100)
        return 4;
        else if(n>=75 && n<80)
        return 3.75;
        else if(n>=70 && n<75)
        return 3.50;
        else if(n>=65 && n<70)
        return 3.25;
        else if(n>=60 && n<65)
        return 3.00;
        else if(n>=55 && n<60)
        return 2.75;
        else if(n>=50 && n<55)
        return 2.50;
        else if(n>=45 && n<50)
        return 2.25;
        else if(n>=40 && n<45)
        return 3.75;
        else if(n<40 && n>=0)
        return 0;
        else if(n<0 || n>100)
        return -1;

    }
void put_student_marks()

{
    vector<string> list_of_subject={"Digital Electronics","Digital Electronics Sessional",
    "Object Oriented Programming","Oriented Programming Sessional"
    ,"Discrete Mathematics and Numerical Methods","Mathematics and Numerical Methods Sessional",
    "Vector,Matrix and Linear Algebra","Elementary Statistics and Probability",
    "Elementary Statistics and Probability Sessional","Viva-voce"};

   int i=0;
   while(i<10)
   {
        cout<<"Enter student number in "<<list_of_subject[i]<<':'<<endl;
        cin>>numbers[i];
        float sub_gpa=  get_gpa(numbers[i]);
        if(sub_gpa==-1)
        {
            cout<<"Wrong number inputed."<<endl;
        }
        else
        {
            gpa[i]=sub_gpa;
            i++;
        }
   }
    
}
void get_student_cgpa()
{
    float x=gpa[0]*3+gpa[1]*1.5+gpa[2]*3+gpa[3]*1.5+gpa[4]*3+gpa[5]*.75+gpa[6]*3+gpa[7]*3+gpa[8]*.75+gpa[9]*.75;
    float cgpa=x/20.25;
    cout<<"Student Name:"<<name<<endl;
    cout<<"Student roll:"<<roll<<endl;
    cout<<"Student CGPA:"<<setprecision(3)<<cgpa<<endl;
}
};

int main(){
    cout<<"For How many students you want to calculate cgpa ?"<<endl;
    int total_student;
    cin>>total_student;
    while(total_student --){
        student x;
        x.put_student_info();
        x.put_student_marks();
        x.get_student_cgpa();
        cout<<endl;

    }
    return 0;
}