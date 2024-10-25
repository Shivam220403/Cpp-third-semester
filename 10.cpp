#include <iostream>
using namespace std;

class Student{
    public:
    
        Student(){

        }
        inline int sum(int a, int b){return a+b;}
};

int main(){
    Student s1;
    cout<<s1.sum(5,10)<<endl;
    return 0;
}