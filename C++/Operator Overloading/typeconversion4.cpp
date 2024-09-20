//userdefined to userdefined
//routine on destination
#include<iostream>
using namespace std;

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


        friend class dist;
};
class dist {
    int m, cm;
    public:

        void display() {
            cout<<m<<"m "<<cm<<"cm"<<endl;
        }
        dist() {
            m=0;
            cm=0;
        }
        dist(length x) {
            //1 ft = 0.3048m
            float z;
            z = (x.feet+x.inch/12.0)*0.3048;
            m = (int)z;
            cm = (z- (int)z)*100;
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