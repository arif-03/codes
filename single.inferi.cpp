#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
    int wealth(){
        int parent_wealth;
        return parent_wealth =2000000;
    }
};
class child: public parent{
    private:
    int child_income;
    int child_wealth;
    public:
    int total_wealth(){
      child_income= 3000;
      return child_wealth = child_income+ wealth();             

    
    }

};
int main(){
    child s;
    int tt =  s.total_wealth();
    
    cout<<"Total wealth is: "<<tt<<endl;
}