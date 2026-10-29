#include <iostream>
#include <string>
using namespace std;

class Bank_Details{
    string name;
    int acc_no;
    double balance;
    public:
        Bank_Details(){
            cout<<"Enter the name of the account holder: ";
            cin>>name;
            cout<<"Enter the account number: ";
            cin>>acc_no;
            cout<<"Enter the account balance: ";
            cin>>balance;
        }

        string get_name(){
            return name;
        }

        double get_balance(){
            return balance;
        }

        void display(){
        cout << "\n\n========== BANK DETAILS ==========";
        cout << "\nName             : " << name;
        cout << "\nAccount number   : " << acc_no;
        cout << "\nBalance          : " << balance;
        cout << "\n===========================================";
        }
};

void highest_balance(Bank_Details b[], int n){
    int highest = 0;
    for (int i=1; i<n; i++){
        if (b[i].get_balance()>b[highest].get_balance()){
            highest = i;
        }
    }
    cout <<"\nThe highest balance holder is: "<<b[highest].get_name();
}

int main(){
    Bank_Details b[3];
    for (int i=0; i<3; i++){
        cout << "\nCustomer "<<i+1;
        b[i].display();
    }
    highest_balance(b,3);
    return 0;
}