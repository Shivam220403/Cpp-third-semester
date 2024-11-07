#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        int result = a + b + c;
        cout << "Sum calculated by Base class: " << result << endl;
        return result;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        int result = a + b + c;
        cout << "Sum calculated by Derived class: " << result << endl;
        return result;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;
    Base *basePtr = &derivedObj;

    basePtr->sum(5, 10, 15);
    Derived *derivedPtr = dynamic_cast<Derived*>(&baseObj);
    if (derivedPtr) {
        derivedPtr->sum(7, 14, 21);
    } else {
        cout << "Base object cannot be treated as Derived object." << endl;
    }

    return 0;
}
