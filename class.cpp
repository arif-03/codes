#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void afun(){
        cout<<"Class A inherited\n";
    }


};
class B: public A{
    private:
    void pfun(){
        cout<<"this is private this won't be inherited. this function can only use by class B\n";
    }
    public:
    void bfun(){
        
        cout<<"Class B inherited\n";
    }
};
class C: public B{
    public:
    void cfun(){
        cout<<"Class C inherited\n";
    }
};
int main()
{
    C c;
    c.afun();
    c.bfun();
    c.cfun();
    B b;

    cout<<"This is multilevel inheritance :) \n";

return 0;
}
