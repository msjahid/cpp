#include <iostream>
using namespace std;
class BankAccount{
public:
    string accountName;
    int accountNumber;
    int voterIdNumber;
    double balance;
 void withdraw(int amount){
    if(amount > 0 && amount <= balance){
        balance = balance + amount;
    }
 }
 void deposit(int amount){
    if(amount > 0 && amount >= 100000){
        balance = balance + amount;
    }
 }
 double getBalance(){
    return balance;
 }
};
int main()
{
    /*
    BankAccount *a = new BankAccount();


//The new operation returns a pointer to the newly created object, so you need to change the code BankAccount *a = new BankAccount();
//and another thing is when you are using new you have to use (->) arrow operator instead of (.) dot operator


    a->accountName = "Md Rakibul Hasan";
    a->accountNumber = 1000;
    a->balance = 500;
    a->deposit(100);
    */
    BankAccount a;
    a.accountName = "Md Jahid Hasan";
    a.accountNumber = 200;
    a.balance = 4000;
    //cout<< a->accountNumber << " " << a->accountName << " " << a->getBalance() << endl;
    cout<< a.accountNumber << " " << a.accountName << " " << a.getBalance() << endl;
}
