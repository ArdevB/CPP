#include<iostream>
using namespace std;

class Distance{

    public:
        int inch = 20;
        int feet = 15;

        void display(){
            cout << "Inch: " << inch << endl;
            cout << "Feet: " <<  feet << endl;
        }

};

class Distance_two{

    public:
        float meter;
        float cm;

        void operator = (Distance a){
            meter = (1 / 3.3) * a.feet;
            cm = (1 / 0.4) * a.inch;
        }

        void display(){
            cout << "Meter: " << meter << endl;
            cout << "Centimeter: " <<  cm << endl;
        }

};

int main(){

    Distance a;
    Distance_two b;

    //CLass type conversion with operator overloading
    b = a;

    //displaying data
    a.display();
    b.display();

    return 0;
}