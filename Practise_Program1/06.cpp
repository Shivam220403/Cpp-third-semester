#include <iostream>
using namespace std;

class Base{
    public:
        int a = 10;
};
class Derived1{
    public:
        int b = 20;
};
class Derived2 : public Derived1, Base{
    public:
        void product(){
            cout<<a*b<<endl;
        }
};


int main(){
    Derived2 num;
    num.product();
    return 0;
}