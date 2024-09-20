#include<iostream>
#include<string.h>
using namespace std; 

class Student {
    char name[50];
    int age;
    public:
        Student() {                     //default
            strcpy(name, "Ardev");
            age = 19;
        }

        Student(char n[50], int a) {    //parameterized 
            strcpy(name,n);
            age = a;
        }

        Student (Student &s) {          //copy
            strcpy(name, s.name);
            age = s.age;
        }

        ~Student () {                   //destructor
            cout<<"Destructor Called"<<endl;
        }

        void display() {
            cout<<name<<" "<<age<<endl;
        }
};

int main() {
    Student s;  //default
    Student t("Bajracharya", 19); //parameterized
    Student u(t);       //copy 
    Student v = u;      //default copy
    s.display();
    t.display();
    v.display();
    u.display();
}