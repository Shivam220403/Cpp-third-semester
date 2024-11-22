/*
Create a friend class to check if a number is prime or not. 
*/
#include <iostream>
#include <cmath>
using namespace std;

class Number {
    public:
        int value;
        Number(int val) : value(val) {}

        friend class PrimeChecker;
};

class PrimeChecker {
    public:
        bool isPrime(const Number& num) {
            if (num.value <= 1) return false;
            for (int i = 2; i <= sqrt(num.value); ++i) {
                if (num.value % i == 0) return false;
            }
            return true;
        }
};

int main() {
    Number num(29);
    PrimeChecker checker;

    if (checker.isPrime(num)) {
        cout << num.value << " is a prime number." << endl;
    } else {
        cout << num.value << " is not a prime number." << endl;
    }

    return 0;
}
