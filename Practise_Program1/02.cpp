#include<iostream>
using namespace std;

class SwapNums{
    public:
        SwapNums(int a , int b){
            cout<<"Before Swap: \n" <<"a: "<<a<<"\nb: "<<b<<endl; 
            swap(a,b);
            cout<<"After Swap: \n" <<"a: "<<a<<"\nb: "<<b<<endl; 
        }
};

int main(){
    SwapNums num(5,6);
    return 0;
}