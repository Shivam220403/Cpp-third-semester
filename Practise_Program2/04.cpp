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

class friendClass : public A, public B, public C {
    public:

        friendClass(int xA = 0, int xB = 0, int xC = 0) 
            : A(xA), B(xB), C(xC) {} 

        void DisplayA(A& objA) {
            cout << "a: " << objA.a << endl;
        }

        void DisplayB(B& objB) {
            cout << "b: " << objB.b << endl;
        }

        void DisplayC(C& objC) {
            cout << "c: " << objC.c << endl;
        }
};

int main() {
    A oA(5);
    B oB(6);
    C oC(8);

    friendClass F(10, 20, 30); 

    F.DisplayA(oA);
    F.DisplayB(oB);
    F.DisplayC(oC); 

    return 0;
}
