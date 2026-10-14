#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int account_no;
    string name;
    float balance;
    static int count;

public:
    BankAccount(int acc, string nm, float bl) {
        account_no = acc;
        name = nm;
        balance = bl;
        count++;
        cout << "Bank account is created successfully." << endl;
    }

    void display() {
        cout << "Account number is: " << account_no << endl;
        cout << "Name of account holder: " << name << endl;
        cout << "Account balance : " << balance << endl;
    }

    static void display_count() {
        cout << "Number of bank accounts: " << count << endl;
    }

    ~BankAccount() {
        cout << "Account deleted." << endl;
    }
};

// Initialize static member
int BankAccount::count = 0;

int main() {
    BankAccount b1(1, "GareebNayan", 10000);
    BankAccount b2(2, "Avishkar", 50000);

    b1.display();
    b2.display();
    BankAccount::display_count();

    return 0;
}
