#include<iostream>
using namespace std;

void displayChar (char c = '*', int n=5) {
    int i;
    for(i=0; i<n; i++) {
        cout<<c;
    }
    cout<<endl;
}

int main() {
    displayChar(); //deafult argument
    displayChar('#', 4); //custom argument
    displayChar('#'); // default argument for n
    return 0;
}