//multiple inheritance
#include<iostream>
using namespace std;

class Teacher {
    char name[20];
    int id;
    public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }
};

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


class HOD: public Teacher, public Citizen {
    int bonus;
    public:
    void Hgetdata() {
        getdata();
        cout << "Enter Bonus";

        enterCID();
    }
    void Hdisplay() {
        display();
        cout<<"Bonus: "<<bonus<<endl;
        displayCID();
    }
};

int main() {
    Teacher t;
    t.getdata();
    HOD h1;
    h1.Hgetdata();
    h1.Hdisplay();
    t.display();
}