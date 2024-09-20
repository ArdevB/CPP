#include<iostream>
using namespace std;

class Student;

class Parents {
    char name[20];
    int age;
    public: 
        void readData() {
            cout<<"Enter name of the parent: ";
            cin>>name;
            cout<<"Enter age of the parent: ";
            cin>>age;
        }
        friend void displayData(Parents, Student);
};

class Student {
    char name[20];
    int roll;
    public:
        void read() {
            cout<<"Enter name of the Student: ";
            cin>>name;
            cout<<"Enter roll number of the Student: ";
            cin>>roll;
        }

        friend void displayData(Parents, Student);
};

void displayData(Parents x, Student y) {
    cout<<"Name of the parent: "<<x.name<<endl;
    cout<<"Age of the parent: "<<x.age<<endl;
    cout<<"Name of the student: "<<y.name<<endl;
    cout<<"Roll number of the student: "<<y.roll<<endl;
}

int main() {
    Parents p;
    Student s;
    p.readData();
    s.read();
    displayData(p, s);
}