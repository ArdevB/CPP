#include<iostream>
using namespace std;

class Student {
    float math, science, english, average;
    char name[100], address[100];
    public:
        void readData() {
            cout<<"Enter Student Name: ";
            cin>>name;
            cout<<"Enter Address: ";
            cin>>address;
            cout<<"Enter marks of Math, Science and English: ";
            cin>>math>>science>>english;
        }

        void calcAvg() {
            average = (math+science+english)/3;
        }

        void displayData() {
            cout<<"Student Name: "<<name<<endl<<"Address: "<<address<<endl;
            cout<<"Avergae: "<<average;
        }
};

int main() {
    Student s;
    s.readData();
    s.calcAvg();
    s.displayData();
    return 0;
}