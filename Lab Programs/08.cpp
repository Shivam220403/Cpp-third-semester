/*
Create a friend function to display student details in student class and  
class  containing data members are name, age, department, course. 
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string d, string c)
        : name(n), age(a), department(d), course(c) {}

    friend void displayStudentDetails(const Student& student);
};

void displayStudentDetails(const Student& student) {
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    Student student1("Alice", 20, "Computer Science", "B.Tech");
    displayStudentDetails(student1);

    return 0;
}
