#include<iostream>
using namespace std;

class Meter {
    int m, cm;
    public:
        void read() {
            cout<<"Enter details: ";
            cin>>m>>cm;
        }

        void display() {
            cout<<m<<"m "<<cm<<"cm ";
        }
        friend class Feet;
};

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

        operator Meter() {
            Meter y;
            float combined = ft+inch/12.0;
            float combinedMeter = combined/12.0;
            y.m = int(combinedMeter);
            y.cm = (combinedMeter - int(combinedMeter))*100;
            return y;
        } 
};

int main() {
    Meter a;
    Feet b;
    b.displayF();
    a=b;
    a.display();
}