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

int main() {
    cout << "Sum of two integers (3 + 4): " << add(3, 4) << endl;
    cout << "Sum of two doubles (2.5 + 4.5): " << add(2.5, 4.5) << endl;
    cout << "Sum of three integers (1 + 2 + 3): " << add(1, 2, 3) << endl;
    cout << "Concatenation of strings ('Hello' + ' World'): " << add(string("Hello"), string(" World")) << endl;

    return 0;
}
