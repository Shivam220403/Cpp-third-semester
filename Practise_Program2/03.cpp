#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        string dept;
        string course;
    public:
        Student(string name, int age, string dept, string course){
            this->name = name;
            this->age = age;
            this->dept = dept;
            this->course = course;
        }

        friend void Display(const Student& S);
};

void Display(const Student& S){
    cout<<"Student Name: "<<S.name<<endl;
    cout<<"Student Age: "<<S.age<<endl;
    cout<<"Student Dept: "<<S.dept<<endl;
    cout<<"Student Course: "<<S.course<<endl;
}

int main(){
    Student s1("Shivam", 21, "B.Tech", "Cpp");
    Display(s1);
    return 0;
}