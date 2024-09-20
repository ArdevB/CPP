//single inheritance
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

class HOD: public Teacher {
    char name[20];
    int id;
    public:
    void Hgetdata() {
        getdata();
        cout << "Enter name of HOD: ";
        cin >> name;
        cout << "Enter id of HOD: ";
        cin >> id;
    }
    void Hdisplay() {
        display();
        cout << "Name of HOD: " << name << endl;
        cout << "Id of HOD: " << id << endl;
    }
};

int main() {
    HOD h1;
    h1.Hgetdata();
    h1.Hdisplay();
}