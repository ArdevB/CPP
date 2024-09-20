#include<iostream>
using namespace std;

class Length {
    int feet, inch;
    public:
        void read() {
            cout<<"Enter Details: ";
            cin>>feet>>inch;
        }

        void display() {
            cout<<feet<<" "<<inch;
        }

        friend class Dist;
};

class Dist {
    int m,cm;
    public: 
        void display() {
            cout<<m<<"m "<<cm<<"cm ";
        }

        Dist() {
            m=0;
            cm=0;
        }

        Dist(Length x) {
            float z;
            z=(x.feet+x.inch/12.0)*0.3048;
            m=(int)z;
            cm=(z-(int)z)*100;
        }
};

int main() {
    Length l;
    l.read();
    Dist d=l;
    d.display();

    return 0;
}