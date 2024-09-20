//nested class 
#include<iostream>
using namespace std;

class Student {
    public:
        void read() {
            cout<<"Enter Name and Age: ";
            cin.getline(name, 20);
            cin>>age;
            sub.readMarks();
        }

        void display() {
            cout<<"Student's Name and Age: "<<name<<" "<<age<<endl;
            sub.displayMarks();
        }

        class Subject {
            float m, s;
            public:
                void readMarks() {
                    cout<<"Enter Marks of Maths and Science: ";
                    cin>>m>>s;
                }

                void displayMarks() {
                    cout<<"Marks of Maths: "<<m<<endl;
                    cout<<"Marks of Science: "<<s<<endl;
                }
        };
    private: 
        char name[20];
        int age;
        Subject sub;  
}s1;

int main() {
    s1.read();
    s1.display();
    return 0;
}