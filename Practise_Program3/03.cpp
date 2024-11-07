#include <iostream>
using namespace std;

class Number {
    private:
        int value;

    public:
        Number(int val = 0) : value(val) {}

        Number operator+(const Number &obj) const {
            return Number(value + obj.value);
        }

        Number operator-(const Number &obj) const {
            return Number(value - obj.value);
        }

        friend Number operator+(const Number &obj1, const Number &obj2) {
            return Number(obj1.value + obj2.value);
        }

        friend Number operator-(const Number &obj1, const Number &obj2) {
            return Number(obj1.value - obj2.value);
        }

        void display() const {
            cout << "Value: " << value << endl;
        }
};

int main() {
    Number num1(15);
    Number num2(10);

    cout << "Initial values:" << endl;
    cout << "num1: ";
    num1.display();
    cout << "num2: ";
    num2.display();

    Number sum_member = num1 + num2;
    cout << "\nSum using member function: ";
    sum_member.display();

    Number diff_member = num1 - num2;
    cout << "Difference using member function: ";
    diff_member.display();

    Number sum_friend = operator+(num1, num2);
    cout << "\nSum using friend function: ";
    sum_friend.display();

    Number diff_friend = operator-(num1, num2);
    cout << "Difference using friend function: ";
    diff_friend.display();

    return 0;
}
