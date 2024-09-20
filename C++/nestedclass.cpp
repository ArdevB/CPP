//nested class
#include<iostream>
using namespace std;

class Student {
    public:
        class Subject {
            float m, s;
            public:
                void readMarks() {
                    cout<<"Enter Maths and Science Marks: ";
                    cin>>m>>s;
                }
                void displayMarks() {
                    cout<<"Maths: "<<m<<endl<<"Science: "<<s<<endl;
                }
        };
        private: 
            char name[200];
            int roll;
            Subject sub;
        public: 
            void read() {
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter Roll: ";
                cin>>roll;
                sub.readMarks();
            }
            void display() {
                cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl;
                sub.displayMarks();
            }
}st;

int main() {
    st.read();
    st.display();
    return 0;
}