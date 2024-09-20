//basic to userdefined
//integer to m and cm
#include<iostream>
using namespace std;

class length {
    int m, cm;
    public: 
        length() {
            m=0;
            cm=0;
        }

        length(int x) {
            m=x/100;
            cm=x%100;
        }

        void display() {
            cout<<m<<"m "<<cm<<"cm"<<endl;
        }
};

int main() {
    int x=250;
    length l(x);
    l.display();

    return 0;
}