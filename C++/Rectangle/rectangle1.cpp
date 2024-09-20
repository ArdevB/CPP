#include<iostream>
using namespace std;

class Rectangle {
    int l,b,p;
    public:
        void read() {
            cout<<"Enter Length and Breadth: ";
            cin>>l>>b;
        }

        void calculate() {
            p=2*(l+b);
        }

        void display() {
            cout<<"Perimeter: "<<p<<endl;
        }

        void calculateAll() {
            read();
            calculate();
            display();
        }
};

    int main() {
        //pointer object
        //nesting member functions
    Rectangle *r= new Rectangle;
    r->calculateAll();
    delete r;
}