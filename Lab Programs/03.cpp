/*
Write a program to overload + and - operator to find the sum of two numbers using member function and friend function.
*/

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val = 0) : value(val) {}

    void display() const {
        cout << "Value: " << value << endl;
    }

    Number operator+(const Number& obj) const {
        return Number(value + obj.value);
    }

    Number operator-(const Number& obj) const {
        return Number(value - obj.value);
    }

    friend Number operator+(const Number& obj1, const Number& obj2) {
        return Number(obj1.value + obj2.value);
    }

    friend Number operator-(const Number& obj1, const Number& obj2) {
        return Number(obj1.value - obj2.value);
    }
};

int main() {
    Number num1(10), num2(5);

    Number result1 = num1 + num2;
    Number result2 = num1 - num2;

    cout << "Using member function:" << endl;
    result1.display();
    result2.display();

    Number result3 = operator+(num1, num2);
    Number result4 = operator-(num1, num2);

    cout << "Using friend function:" << endl;
    result3.display();
    result4.display();

    return 0;
}
