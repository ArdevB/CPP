#include<iostream>
using namespace std;
//pass by value
class Rectangle {
    int l,b,p;
    public:
        void read() {
            cout<<"Enter Length and Breadth: ";
            cin>>l>>b;
        }

        void calculate(Rectangle x, Rectangle y) {
            x.l=x.l+2;
            x.b=x.b+2;
            l=x.l+y.l;
            b=x.b+y.b;
            p=2*(l+b);
        }

        void display() {
            cout<<"Length: "<<l<<" Breadth: "<<b<<endl;
            cout<<"Perimeter: "<<p;
        }
}a,b,c;

    int main() {
    a.read();
    b.read();
    c.calculate(a,b);
    a.display();
    b.display();
    c.display();
}