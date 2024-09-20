//Friend Function
#include<iostream>
using namespace std;

class Rectangle {
    int length, breadth, p;
    public:
        void read() {
            cout << "Enter length and breadth: ";
            cin >> length >> breadth;
        }
        
        void calculate() {
            p=2*(length+breadth);
        }

        friend void display(Rectangle);
};

void display(Rectangle r) {
    cout<<"Perimeter: "<<r.p;
}

int main() {
    Rectangle rec;
    rec.read();
    rec.calculate();
    display(rec);
}