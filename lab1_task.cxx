#include <iostream>
#include <string>           
using namespace std;


class Student {
public: 
    string name;
    int age;
    float gpa;
};

int main() {
   
    Student student1; 
    Student student2; 

   
    student1.name = "Alice";
    student1.age = 20;
    student1.gpa=3.5;

    student2.name = "Bob";
    student2.age = 22;
    student2.gpa=3.7;

    
    cout << "Student 1 Information:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "GPA:" << student1.gpa << endl;

    cout << "\nStudent 2 Information:" << endl; 
    cout << "Name: " << student2.name << endl;
    cout << "Age: " << student2.age << endl;
    cout << "GPA:" << student2.gpa << endl;

    return 0;
}
