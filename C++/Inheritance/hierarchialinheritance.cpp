//hierarchial inheritance
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
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }
};



class HOD: public Citizen {
    int bonus;
    public:
    void Hgetdata() {
        cout << "Enter Bonus";

        enterCID();
    }
    void Hdisplay() {
        cout<<"Bonus: "<<bonus<<endl;
        displayCID();
    }
};

int main() {
    Teacher t;
    t.getdata();
    t.enterCID();
    HOD h1;
    h1.Hgetdata();
    h1.Hdisplay();
    t.display();
    t.displayCID();
}