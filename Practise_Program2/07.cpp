#include <iostream>
using namespace std;

class Num{
    public:
        virtual int Sum(int, int, int) = 0;
};

class Number : public Num{
    public:
        int Sum(int a, int b, int c) override{
            return a+b+c;
        }
};

int main(){
    Number n;
    cout<<n.Sum(3,4,5)<<endl;
    return 0;
}