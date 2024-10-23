#include <iostream>
using namespace std;

class A{
    public:
        int a = 10;
        void DisplayA(){
            cout<<a<<endl;
        }
};
class B : public A{
    public:
        int b = 20;
        void DisplayB(){
            cout<<b<<endl;
        }

};
class C : public A{
    public:
        int c = 30;
        void DisplayC(){
            cout<<c<<endl;
        }
};
class D : public A{
    public:
        int d = 40;
        void DisplayD(){
            cout<<d<<endl;
        }
};
class E : public B{
    public:
        int e = 50;
        void DisplayE(){
            cout<<e<<endl;
        }
};

int main(){
    A oa;
    B ob;
    C oc;
    D od;
    E oe;

    // functions that can be used by oa
    oa.DisplayA();
    // functions that can be used by ob
    ob.DisplayA();
    ob.DisplayB();
    // functions that can be used by oc
    oc.DisplayA();
    oc.DisplayC();
    // functions that can be used by od
    od.DisplayA();
    od.DisplayD();
    // functions that can be used by oe
    oe.DisplayA();
    oe.DisplayB();
    oe.DisplayE();

    return 0;
}