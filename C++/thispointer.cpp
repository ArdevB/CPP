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
};

int main() {
    Info x;
    x.read("Ardev", 10);
    x.display();
}