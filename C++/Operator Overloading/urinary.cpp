//overloading urinary operator
#include<iostream>
using namespace std;

class Rect {
    int l, b;
    public: 
        void read() {
            cout<<"Enter L and B: ";
            cin>>l>>b;
        }

        Rect operator -() {
            Rect h;
            h.l=-l;
            h.b=-b;
            return h;
        }

        void display() {
            cout<<l<<endl<<b;
        }
};

int main() {
    Rect x, y;
    x.read();
    y=-x;
    y.display();
    return 0;
}