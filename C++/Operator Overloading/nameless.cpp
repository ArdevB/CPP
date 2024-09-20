//nameless operator
#include<iostream>
using namespace std;

class Rect {
    int l,b;
    public:
        void read() {
            cout<<"Enter L and B: ";
            cin>>l>>b;
        }

        Rect() {
            l=0; //0 default
            b=0; //0 default
        }

        Rect(int x, int y) {
            l=x;
            b=y;
        }
        Rect operator -() { //urinary operator
            return Rect(-l, -b); //nameless object
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