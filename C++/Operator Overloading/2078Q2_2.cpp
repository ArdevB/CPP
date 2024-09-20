#include<iostream>
using namespace std;

class Feet {
    int ft, inch;
    public:
        void readF() {
            cout<<"Enter details: ";
            cin>>ft>>inch;
        }

        void displayF() {
            cout<<ft<<"ft "<<inch<<"inch ";
        }

        friend class Meter;
};

class Meter {
    int m,cm;
    public:
        void read() {
            cout<<"Enter details: ";
            cin>>m>>cm;
        }

        void display() {
            cout<<m<<"m "<<cm<<"cm ";
        }

        Meter() { m=0; cm = 0;} 

        Meter (Feet a) {
            float combined = a.ft+a.inch/12.0;
            float combinedMeter = combined/12.0;
            m = int(combinedMeter);
            cm = (combinedMeter - int(combinedMeter))*100;
        }
};

int main() {
    Meter a;
    Feet b;
    b.displayF();
    a=b;
    a.display();
}
