#include <iostream>
using namespace std;

class Department;

class Student {
    public:
        string name;
        int age;
        Student(string n, int a) : name(n), age(a) {}
        friend void displayDetails(Student s, Department d);
};

class Department {
private:
    string deptName;
    string course;
public:
    Department(string d, string c) : deptName(d), course(c) {}

    // Declaring friend function to access private data
    friend void displayDetails(Student s, Department d);
};

void displayDetails(Student s, Department d) {
    cout << "Student Name: " << s.name << endl;
    cout << "Student Age: " << s.age << endl;
    cout << "Department: " << d.deptName << endl;
    cout << "Course: " << d.course << endl;
}


int main(){
    Student s1("Shivam", 21);
    Department d1("Computer Science", "B.Tech");

    displayDetails(s1, d1);
    return 0;
}