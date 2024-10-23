#include <iostream>
using namespace std;

class Base{
    public:
        int a = 10;
        int b = 20;
};
class Derived1 : public Base{
    public:
        void DisplayA(){
            cout<<a<<endl;
        }
};
class Derived2 : public Base{
    public:
        void DisplayB(){
            cout<<b<<endl;
        }
};

int main(){
    Derived1 num1;
    Derived2 num2;
    num1.DisplayA();
    num2.DisplayB();
    return 0;
}