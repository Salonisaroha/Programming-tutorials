#include<iostream>
using namespace std;
  int x=9; // global variable
int  add(int a, int b); //function prototype
int increase(int &para1,  int &para2){
    para1 = 100; // call by refernce.
   
   para2 = 400;
   
}
void myfun(float x, float y){
    x=2.0;
    y=2;
    float area;
    area = x*y;
    cout<<area;
}
int main(){
    // there are two types of variables i.e. local variables, global variables.
    // local variable are those in which scope of declared variable is only inside the function.
    // global variable are those in which there is scope of variables are all over the code.
    // There are two types of functions . i.e, Call by value, and call by refernce.
    // Call by value:- In call by value give any value in parameter and after calling it give another value.
int x =8; // local variable
// precedence is given to local variable.

// int a=500;
// int b=600;
// increase(a,b);
// cout<<a<<" "<<b<<endl;

myfun(1.0, 1.0);

return 0.0;

}

