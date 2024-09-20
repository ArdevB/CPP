//multilevel inheritance
#include<iostream>
using namespace std;

class Citizen {
    int cid;
    public:
        void enterCID() {
            cout<<"Enter Citizen number: ";
            cin>>cid;
        }

        void displayCID() {
            cout<<"Citizen ID: "<<cid<<endl;
        }
};
class Teacher: public Citizen {
    char name[20];
    int id;
    public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
        enterCID();
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        displayCID();
    }
};

class HOD: public Teacher {
    int bonus;
    public:
    void Hgetdata() {
        getdata();
        cout << "Enter Bonus";
    }
    void Hdisplay() {
        display();
        cout<<"Bonus: "<<bonus<<endl;
    }
};

int main() {
    HOD h1;
    h1.Hgetdata();
    h1.Hdisplay();
}