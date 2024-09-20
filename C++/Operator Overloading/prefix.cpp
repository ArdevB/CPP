//prefix overloading using constructor and friend function
#include<iostream>
using namespace std;

class Rectangle {
    int l, b;
    public:
        void read() {
            cout<<"Enter l and b: ";
            cin>>l>>b;
        }

        void display() {
            cout<<"l = "<<l<<" b = "<<b<<endl;
        }

        // friend void operator ++(Rectangle&);
        friend void operator ++(Rectangle&);
};

void operator ++(Rectangle &y) {
    y.l=+2;
    y.b=+2;
}

//void operator ++(Rectangle& x) {
        //     x.l+=3;
        //     x.b+=3;
        // }

int main() {
    Rectangle r1, r2;
    // r1.read();
    // ++r1; //r1.operator ++() prefix
    // r1.display();

    r2.read();
    ++r2; //r2.operator ++() postfix
    r2.display();
    return 0;
}
