#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    virtual void getdata() = 0;
    virtual void show() const = 0;
    virtual ~Person() {} 
};

class Student : public Person {
private:
    string name;
    int roll_number;
    float grade;
public:
    void getdata() override {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_number;
        cout << "Enter grade: ";
        cin >> grade;
    }
    void show() const override {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Grade: " << grade << endl;
    }
};

class Lecturer : public Person {
private:
    string name;
    int employee_id;
    string department;
public:
    void getdata() override {
        cout << "Enter lecturer name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> employee_id;
        cout << "Enter department: ";
        cin >> department;
    }
    void show() const override {
        cout << "Lecturer Name: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    
    Person* people[2];
    people[0] = new Student();  
    people[1] = new Lecturer(); 

    cout << "Enter details for Student:" << endl;
    people[0]->getdata();  
    cout << "Enter details for Lecturer:" << endl;
    people[1]->getdata(); 

   
    cout << "\nStudent Details:" << endl;
    people[0]->show();  
    cout << "\nLecturer Details:" << endl;
    people[1]->show();  

    delete people[0];
    delete people[1];

    return 0;
}
