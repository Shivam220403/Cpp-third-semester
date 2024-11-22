/*
Write a program to overload increment operator to increment value of a by 5, 
decrement operator to decrement value of a by 1, 
negation operator to change the value of a from -ve to +ve and +ve to -ve using member function and friend function.
*/
#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int val = 0) : a(val) {}

    void display() const {
        cout << "Value of a: " << a << endl;
    }

    Number& operator++() {
        a += 5;
        return *this;
    }

    Number& operator--() {
        a -= 1;
        return *this;
    }

    Number operator-() const {
        return Number(-a);
    }

    friend Number operator++(Number& obj, int) {
        Number temp = obj;
        obj.a += 5;
        return temp;
    }

    friend Number operator--(Number& obj, int) {
        Number temp = obj;
        obj.a -= 1;
        return temp;
    }

    friend Number operator-(const Number& obj) {
        return Number(-obj.a);
    }
};

int main() {
    Number num(10);

    cout << "Initial value: ";
    num.display();

    ++num;
    cout << "After prefix increment (++num): ";
    num.display();

    --num;
    cout << "After prefix decrement (--num): ";
    num.display();

    -num;
    cout << "After negation (-num): ";
    num.display();

    num++;
    cout << "After postfix increment (num++): ";
    num.display();

    num--;
    cout << "After postfix decrement (num--): ";
    num.display();

    num = -num;
    cout << "After negation using friend (-num): ";
    num.display();

    return 0;
}
