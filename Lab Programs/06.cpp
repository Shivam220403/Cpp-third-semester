/*
Write a program to create a template for structures and implement students' data with name, age, course and department.
*/
#include <iostream>
#include <string>
using namespace std;

// Structure template
template <typename T>
struct Student {
    string name;
    T age;
    string course;
    string department;

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<int> student1{"Alice", 20, "B.Tech", "Computer Science"};
    Student<double> student2{"Bob", 19.5, "BBA", "Management"};

    cout << "Student 1 Details:" << endl;
    student1.display();

    cout << "\nStudent 2 Details:" << endl;
    student2.display();

    return 0;
}
