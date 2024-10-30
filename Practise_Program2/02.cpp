#include<iostream>
#include<math.h>
using namespace std;

class Num{
    private:
        int a;

    public:
        Num(int a) {
            this->a = a;
        }
        friend bool isPrime(const Num& num);
};

bool isPrime(const Num& num){
    int a = num.a;
    if(a <= 1){
        return false;
    }
    if(a <= 3){
        return true;
    }
    if(a%2 == 0 || a%3 == 0){
        return false;
    }

    for(int i = 5;i<= sqrt(a);i++){
        if (a % i == 0 || a % (i + 2) == 0){
            return false; 
        }
    }
    return true;
}


int main(){
    Num n(23);

    if(isPrime(n) == 1){
        cout<<"It is a Prime Number."<<endl;
    }else{
        cout<<"It is a Composite Number."<<endl;
    }
    return 0;
}