#include<iostream>
using namespace std;

class Employee {
    public:
        class DOB {
            int y,m,d;
            public:
                void readDate() {
                    cout<<"Enter yy/mm/dd: ";
                    cin>>y>>m>>d;
                }

                void displayDate() {
                    cout<<y<<"-"<<m<<"-"<<d;
                }
        };
    private:
        int eid, salary;
        char ename[20];
        DOB dob;
    public:
        void readData() {
            cout<<"Enter Employee's Name: ";
            cin>>ename;
            cout<<"Enter Employee's ID: ";
            cin>>eid;
            cout<<"Enter Employee's Salary: ";
            cin>>salary;
            dob.readDate();
        }  

        void displayData() {
            cout<<"Employee's Name: "<<ename<<endl;
            cout<<"Employee's ID: "<<eid<<endl;
            cout<<"Employee's Salary: "<<salary<<endl;
            dob.displayDate();
        }
};

int main() {
    Employee e;
    e.readData();
    e.displayData();
    return 0;
}