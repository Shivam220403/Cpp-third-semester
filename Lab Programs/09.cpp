/*
Create a friend class for three classes A, B and C. 
Create private and protected data members in class A, B and C. 
Access all the private and protected data with the help of friend class. 
(Note : in friend class, you can create single function for all classes or separate function for all classes)
*/
#include <iostream>
using namespace std;

class A;
class B;
class C;

class FriendClass {
public:
    void displayDetails(const A& objA, const B& objB, const C& objC);
};

class A {
private:
    int privateDataA;

protected:
    int protectedDataA;

public:
    A(int p, int q) : privateDataA(p), protectedDataA(q) {}

    friend class FriendClass;
};

class B {
private:
    int privateDataB;

protected:
    int protectedDataB;

public:
    B(int p, int q) : privateDataB(p), protectedDataB(q) {}

    friend class FriendClass;
};

class C {
private:
    int privateDataC;

protected:
    int protectedDataC;

public:
    C(int p, int q) : privateDataC(p), protectedDataC(q) {}

    friend class FriendClass;
};

void FriendClass::displayDetails(const A& objA, const B& objB, const C& objC) {
    cout << "Class A: Private = " << objA.privateDataA << ", Protected = " << objA.protectedDataA << endl;
    cout << "Class B: Private = " << objB.privateDataB << ", Protected = " << objB.protectedDataB << endl;
    cout << "Class C: Private = " << objC.privateDataC << ", Protected = " << objC.protectedDataC << endl;
}

int main() {
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    FriendClass friendObj;
    friendObj.displayDetails(objA, objB, objC);

    return 0;
}
