//userdefined to userdefined
//routine on source
#include<iostream>
using namespace std;

class dist {
    int m, cm;
    public:
        void read() {
            cout<<"Enter M,CM: ";
            cin>>m>>cm;
        }

        void display() {
            cout<<m<<"m "<<cm<<"cm"<<endl;
        }
        friend class length;
};

class length {
    int feet, inch;
    public:
        void read() {
            cout<<"Enter Feet and Inch: ";
            cin>>feet>>inch;
        }

        void display() {
            cout<<feet<<"ft "<<inch<<"inch"<<endl;
        }

        operator dist() {
            //1 ft = 0.3048m
            dist d;
            float z;
            z = (feet+inch/12.0)*0.3048;
            d.m = (int)z;
            d.cm = (z- (int)z)*100;
            return d;
        }
};

int main() {
    //routine on source
    length l;
    l.read();
    dist d=l;
    d.display();

    return 0;
}