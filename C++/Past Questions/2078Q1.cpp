#include<iostream>
using namespace std;

class Account {
    int acc_no;
    int balance;
    static int min_balance; //static data member
    public:
        void readData() {
            cout<<"Enter account number: ";
            cin>>acc_no;

            cout<<"Enter Balance: ";
            cin>>balance;
        }

        void displayData() {
            cout<<"Account No: "<<acc_no<<endl;
            cout<<"Balance: "<<balance<<endl;
        }

        static void readMinBalance() {
            cout<<"Enter Minimum Balance: ";
            cin>>min_balance;
        }

        static void displayMinBalance() {
            cout<<"Minimum Balance: "<<min_balance<<endl;
        }
};

int Account::min_balance=0;

int main() {
    Account a[5];
    int i=0;

    Account::readMinBalance();

    for(i=0; i<5; i++) {
        a[i].readData();
    }

    cout<<"Account Details: "<<endl;
    for(i=0; i<5; i++) {
        a[i].displayData();
        a[i].displayMinBalance();
    }

    return 0;
}