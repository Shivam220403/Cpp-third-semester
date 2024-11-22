/*
Write a program to create a template for functions and implement function overloading.
*/

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Template function with two arguments (int): " << add(3, 4) << endl;
    cout << "Template function with three arguments (double): " << add(1.5, 2.5, 3.5) << endl;
    cout << "Normal function with two arguments (int): " << add(5, 7) << endl;

    return 0;
}
