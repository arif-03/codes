#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a=32,b=12,c,d,e,f,g;
   c=a&b;
   e=a^b;
   d=a|b;
   f=a>>3;// 3 bar 2 dye vag
   g=a<<3;//3 bar 2 dye gun

   //&=and |=or ^=exor egula bitwise perator mane binary kaj
   cout<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g;
}

