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
};

    int main() {
        //pointer object
    Rectangle *r= new Rectangle;
    r->read();
    r->calculate();
    r->display();
    delete r;
}