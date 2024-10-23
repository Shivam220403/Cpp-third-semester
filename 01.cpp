#include<iostream>
using namespace std;

class SumofN{
    public:
        SumofN(int n){
            int sum = 0;
            for (int i = 0; i <= n; i++){
                sum += i;
            }
            cout<<"The sum of "<< n <<" is: "<<sum<<endl;
        }
};

int main(){
    SumofN n(5);
    cout<<endl;
    return 0;
}