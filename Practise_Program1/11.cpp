#include <iostream>
using namespace std;

class Number {
    public:
        int value;
        Number(int val){
            value = val;
        }
        friend class PrimeChecker;
};

class PrimeChecker {
    public:
        bool isPrime(Number n) {
        if (n.value <= 1)
            return false;
        for (int i = 2; i <= n.value / 2; i++) {
            if (n.value % i == 0)
                return false;
        }
        return true;
    }
};


int main(){
    Number num(29);
    PrimeChecker checker;
    
    if (checker.isPrime(num))
        cout << num.value << " is a prime number." << endl;
    else
        cout << num.value << " is not a prime number." << endl;
    return 0;
}