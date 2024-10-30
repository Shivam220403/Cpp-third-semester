#include <iostream>
using namespace std;

class SumofArr{
    public:
        SumofArr(int arr[],int size){
            int sum = 0;
            for(int i = 0;i < size;i++){
                if(arr[i] > 0){
                    sum += arr[i];
                }
            }
            cout<<"The sum of positive elements of an array is : "<<sum<<endl;
        }
};

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    SumofArr(arr,size);
    return 0;
}