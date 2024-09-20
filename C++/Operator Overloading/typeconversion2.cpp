//userdefined to basic
#include<iostream>
using namespace std;

class length {
    int feet, inch;
    public:
        length() {
            feet=0;
            inch=0;
        }

        length(int x) {
            feet=x/12;
            inch=x%12;
        }

        void read() {
            cout<<"Enter Feet and Inch: ";
            cin>>feet>>inch;
        }

        void display() {
            cout<<feet<<"ft "<<inch<<"inch"<<endl;
        }

        operator int() {
            return (feet*12+inch);
        }
};

int main() {
    int x=250;
    length l(x), m;
    l.display();

    int y;
    m.read();
    y=(int)m;
    cout<<y;
}