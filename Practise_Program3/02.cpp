#include <iostream>
using namespace std;

class Number {
    private:
        int a;

    public:
        Number(int value = 0) : a(value) {}

        Number operator++() {
            a += 5;
            return *this;
        }

        Number operator--() {
            a -= 1;
            return *this;
        }

        Number operator-() const {
            return Number(-a);
        }

        friend Number operator++(Number &obj, int) {
            Number temp = obj; 
            obj.a += 5;
            return temp;
        }

        friend Number operator--(Number &obj, int) {
            Number temp = obj; 
            obj.a -= 1;
            return temp;
        }
        friend Number operator-(const Number &obj) {
            return Number(-obj.a);
        }

        void display() const {
            cout << "Value of a: " << a << endl;
        }
    };

int main() {
    Number num(10);

    cout << "Initial ";
    num.display();

    ++num;
    cout << "After ++ (member function): ";
    num.display();

    --num;
    cout << "After -- (member function): ";
    num.display();

    num = -num;
    cout << "After negation - (member function): ";
    num.display();

    num++;
    cout << "After ++ (friend function): ";
    num.display();

    num--;
    cout << "After -- (friend function): ";
    num.display();

    num = -num;
    cout << "After negation - (friend function): ";
    num.display();

    return 0;
}
