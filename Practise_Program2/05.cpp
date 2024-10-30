#include <iostream>
using namespace std;

class A {
    private:
        int a;
    public:
        A(int x) {
            a = x;
        }
        friend class friendClass;
};

class B {
    protected:
        int b;
    public:
        B(int x) {
            b = x;
        }
        friend class friendClass;
};

class C {
    public:
        int c;
        
        C(int x) {
            c = x;
        }
        friend class friendClass;
};

class friendClass{
    public:
        void Display(A& a, B& b, C& c);
};

void friendClass::Display(A& a, B& b, C& c) {
    cout << "Class A - Private: " << a.a << endl;
    cout << "Class B - Private: " << b.b << endl;
    cout << "Class C - Private: " << c.c << endl;
}

int main(){
    A objA(10);
    B objB(30);
    C objC(50);

    friendClass friendObj;
    friendObj.Display(objA, objB, objC);
    return 0;
}