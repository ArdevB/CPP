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

        friend void operator ++(Time&, int);
        friend Time operator -(Time&);

        void display() {
            cout<<h<<"H: "<<m<<"M: "<<s<<"S"<<endl;
        }
};

void operator ++(Time& a,int) {
            int x;
            x=a.h*60*60+a.m*60+a.s;
            x=x+1;
            a.h=x/3600;
            a.m=(x%3600)/60;
            a.s=(x%3600)%60;
        }

        Time operator -(Time& c) {
            Time d;
            d.h=-c.h;
            d.m=-c.m;
            d.s=-c.s;
            return d;
        }

int main() {
    Time t, v;
    t.read();
    t++; //postfix
    t.display();
    v=-t;
    v.display();
    return 0;
}