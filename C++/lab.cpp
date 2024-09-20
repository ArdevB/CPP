#include<iostream>
using namespace std;
//memory allocation of object
class Complex {
    int real, img;
    public:
    void readData() {
        cout<<"Enter 2 variables: ";
        cin>>real>>img;
    }

    void displayData() {
        cout<<"The complex number is: "<<real<<" + "<<img<<"i";
    }
};

int main() {
    //pointer object
    Complex *a = new Complex;
    a->readData();
    a->displayData();
    delete a;
}  