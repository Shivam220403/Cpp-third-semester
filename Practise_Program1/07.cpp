#include <iostream>
using namespace std;

class Base1{
    public:
        int a = 20;
};
class Base2:public Base1{
    public:
        int b = 10;
};
class Derived:public Base2{
    public:
        void Sum(){
            cout<<a+b<<endl;
        }
};

int main(){
    Derived num;
    num.Sum();
    return 0;
}