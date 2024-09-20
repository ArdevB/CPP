#include<iostream>
using namespace std;

void displayChar (char c = '#', int n = 5) {
    int i;
    for(i=0; i<n; i++) {
        cout<<c<<endl;
    }
}

int main() {
    displayChar();
    displayChar('*', 4);
    displayChar('#');
}