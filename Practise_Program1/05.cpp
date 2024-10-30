#include <iostream>
using namespace std;

class Base{
    protected:
        int a = 10;
        int b = 20;
};
class Derived:public Base{
    public:
        void Product(){
            cout<<a*b<<endl;
        }
};


int main(){
    Derived num;
    num.Product();
    return 0;
}