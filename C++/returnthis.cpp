#include<iostream>
#include<string.h>
using namespace std;

class Info {
    int age;
    char name[20];
    public:
        void read(char name[20], int age) {
            strcpy(this->name, name);
            this->age=age;
        }
        void display() {
            cout<<name<<""<<age;
        }

    Info calculate(Info e) {
        if(age<e.age) {
            return *this;
        } else {
            return e;
        }
    }
};

int main() {
    Info x, y, z;
    x.read("Ardev", 10);
    y.read("Ard", 20);
    z=x.calculate(y);
    z.display();
}