#include <iostream>
using namespace std;

class Student{
    public:
    inline void Sum(int a, int b){cout <<a+b<<endl;}
};

int main(){
    Student s1;
    s1.Sum(3,4);
    return 0;
}