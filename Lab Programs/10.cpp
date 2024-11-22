/*
Create a friend function for three classes A, B and C. 
Create private and protected data members in class A, B and C. 
Access all the private and protected data with the help of friend function.
*/
#include <iostream>
using namespace std;

class A;
class B;
class C;

// Friend function declaration
void displayDetails(const A& objA, const B& objB, const C& objC);

class A {
private:
    int privateDataA;

protected:
    int protectedDataA;

public:
    A(int p, int q) : privateDataA(p), protectedDataA(q) {}

    friend void displayDetails(const A& objA, const B& objB, const C& objC);
};

class B {
private:
    int privateDataB;

protected:
    int protectedDataB;

public:
    B(int p, int q) : privateDataB(p), protectedDataB(q) {}

    friend void displayDetails(const A& objA, const B& objB, const C& objC);
};

class C {
private:
    int privateDataC;

protected:
    int protectedDataC;

public:
    C(int p, int q) : privateDataC(p), protectedDataC(q) {}

    friend void displayDetails(const A& objA, const B& objB, const C& objC);
};

void displayDetails(const A& objA, const B& objB, const C& objC) {
    cout << "Class A: Private = " << objA.privateDataA << ", Protected = " << objA.protectedDataA << endl;
    cout << "Class B: Private = " << objB.privateDataB << ", Protected = " << objB.protectedDataB << endl;
    cout << "Class C: Private = " << objC.privateDataC << ", Protected = " << objC.protectedDataC << endl;
}

int main() {
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    displayDetails(objA, objB, objC);

    return 0;
}
