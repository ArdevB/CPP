//friend class
#include<iostream>
using namespace std;

class Parents {
    char name[100];
    int age;
    public:
      void readDetails() {
        cout<<"Enter Parent's Name and Age: ";
        cin.getline(name, 100);
        cin>>age;
      }
    friend class Son;
};

class Son {
    char name[100];
    public: 
        void read() {
            cout<<"Enter Son's Name: ";
            cin.getline(name, 100);
        }

        void display(Parents p) {
            cout<<"Parent's Name: "<<p.name<<endl;
            cout<<"Parent's Age: "<<p.age<<endl;
            cout<<"Son's Name: "<<name<<endl;
        }
};

int main() {
    Parents pr;
    Son s;
    s.read();
    pr.readDetails();
    s.display(pr);
}