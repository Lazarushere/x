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
        cout << "Name of account holder is: " << name << endl;
        cout << "Account balance is: " << balance << endl;
    }

    static void display_count() {
        cout << "Number of bank accounts is: " << count << endl;
    }

    ~BankAccount() {
        cout << "Account is destroyed." << endl;
    }
};

// Initialize static member
int BankAccount::count = 0;

int main() {
    BankAccount b1(1, "Shrawani", 10000000);
    BankAccount b2(2, "Shravani", 5000000);

    b1.display();
    b2.display();
    BankAccount::display_count();

    return 0;
}
