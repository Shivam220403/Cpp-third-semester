#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Student {
    private:
        string name;
        T1 age;
        T2 course;
        string department;

    public:
        Student(string n, T1 a, T2 c, string d) : name(n), age(a), course(c), department(d) {}

        void display() const {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Course: " << course << endl;
            cout << "Department: " << department << endl;
        }
};

int main() {
    Student<float, string> student1("Shivam", 21.7, "B.Tech", "CS");
    Student<int, string> student2("Vedansh", 20, "B.tech", "CS");

    cout << "Student 1 Details:" << endl;
    student1.display();
    cout << endl;

    cout << "Student 2 Details:" << endl;
    student2.display();

    return 0;
}
