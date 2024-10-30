#include <iostream>
using namespace std;

class Sum{
    public:
        Sum(int a, int b){
            cout<<"The Sum is: "<<a+b<<endl;
        }

        Sum(float a, float b){
            cout<<"The Sum is: "<<a+b<<endl;
        }

        Sum(char a, char b){
            cout<<"The Sum is: "<<a+b<<endl;
        }
};


int main(){
    Sum sum1(5,6);
    Sum sum2(5.5f,6.6f);
    Sum sum3('a', 'b');
    return 0;
}