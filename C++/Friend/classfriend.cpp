#include<iostream>
using namespace std;

class Interest {
    float rate;
    public:
    void read() {
        cout<<"Enter Rate: ";
        cin>>rate;
    }
    friend class Others;
};

class Others {
    float principal, time, interest;
    public:
    void readData() {
    cout<<"Enter P and T: ";
    cin>>principal>>time;
    }

    void calculate(Interest x){
        interest = (principal * time * x.rate)/100;
    }

    void display() {
        cout<<"Interest: "<<interest<<endl;
    }
};

int main() {
    Interest x;
    Others y;
    x.read();
    y.readData();
    y.calculate(x);
    y.display();
}