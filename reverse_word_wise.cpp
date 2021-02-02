#include<iostream>
using namespace std;
class A{
private:
    int a;
public:
    A(){
    cout<<"Default Constrcutor called"<<endl;
    }
    A(int i){
     a=i;
    cout<<"Parameterized Constructor called : "<<a<<endl;
    }
    A(A const &a3){
        a=a3.a;
        cout<<"Copy Constructor called "<<a;
    }
};
int main(){
    A a1;
    A a2(12);
    A a3(a2);
}
