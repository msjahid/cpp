#include <iostream>

using namespace std;
class BankAccount{
private:
    string accountName;
    int voterIdNumber;
    double balance;
    int accountNumber;

public:
    BankAccount(){
    accountName = "";
    accountNumber = 0;
    balance = 0.0;
    voterIdNumber = 0;
    }
public:
    BankAccount(string name, int number, double amount){
        accountName = name;
        accountNumber = number;
        balance = amount;
    }

public:
    void withdraw(int amount){
    if(amount > 0 && amount <= balance){
        balance = balance - amount;
    }
    }
public:
    void deposit(int amount){
    if(amount > 0 && amount <= 10000){
        balance = balance + amount;
    }
}

public:
    double getBalance(){
    return balance;
}

public:
    string getAccountName(){
    return accountName;
}
public:
    int getAccountNumber(){
    return accountNumber;
}
};
int main()
{
    BankAccount *a = new BankAccount();
    BankAccount *b = new BankAccount();
    BankAccount *c = new BankAccount("Monirul Hasan", 100, 500);
    a->deposit(100);
    cout<< a->getAccountName() << endl;
    cout<< b->getAccountName() << endl;
    cout<< c->getAccountName() << endl;
}

