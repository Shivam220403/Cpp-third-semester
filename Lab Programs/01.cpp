/*
Find the sum of three numbers with the help of function overriding. 
Display sum of base class with the help of derived class object and vice versa.
*/

#include<iostream>
using namespace std;

class Base{
    public:
        virtual int Sum(int a, int b, int c) = 0;
};
class Derived:public Base{
    public:
        int Sum(int a, int b, int c) override{
            return a+b+c;
        }
};

int main(){
    Derived derivedObj;
    int s = derivedObj.Sum(2,3,4);
    cout << s << endl;
    return 0;
}