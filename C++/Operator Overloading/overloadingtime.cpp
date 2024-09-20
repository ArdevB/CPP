//overloading, prefix and postfix
#include<iostream>
using namespace std;

class Time {
    int h, m, s;
    public:
        void read() {
            cout<<"Enter H,M,S: ";
            cin>>h>>m>>s;
        }

        void operator ++() {
            int x;
            x=h*60*60+m*60+s;
            x=x+1;
            h=x/3600;
            m=(x%3600)/60;
            s=(x%3600)%60;
        }

        void operator ++(int) {
            int x;
            x=h*60*60+m*60+s;
            x=x+1;
            h=x/3600;
            m=(x%3600)/60;
            s=(x%3600)%60;
        }

        void display() {
            cout<<h<<"H: "<<m<<"M: "<<s<<"S"<<endl;
        }
};

int main() {
    Time t;
    t.read();
    ++t; //prefix
    t.display();
    t.read();
    t++; //postfix
    t.display();
    return 0;
}