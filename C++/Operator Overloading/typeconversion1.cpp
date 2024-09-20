//userdefined to basic
#include<iostream>
using namespace std;

class length {
    int feet, inch;
    public:
        void read() {
            cout<<"Enter Feet and Inch: ";
            cin>>feet>>inch;
        }

        operator int() {
            return (feet*12+inch);
        }
};

int main() {
    int x;
    length l;
    l.read();
    x=(int)l;
    cout<<x;
}