#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    int id;
    string OwnerName;
    double balance;
    BankAccount(int ID, string OWNERNAME, double BALANCE)
    {
        id = ID;
        OwnerName = OWNERNAME;
        balance = BALANCE;
    }
    BankAccount() = default;
    void Deposit(double DEPOSIT)
    {
        balance += DEPOSIT;
    }
    void Withdraw(double WITHDRAW)
    {
        balance -= WITHDRAW;
    }
};

class SavingsAccount : public BankAccount
{
public:
    double percentage;
    SavingsAccount(int ID, string OWNERNAME, double BALANCE, double PERCENTAGE)
    {
        id = ID;
        OwnerName = OWNERNAME;
        balance = BALANCE;
        percentage = PERCENTAGE;
    }
    void percents()
    {
        balance = balance * (1 + percentage / 100);
    }
};

int main()
{
    BankAccount BankAccount{ 1, "a", 100};
    SavingsAccount SavingsAccount{ 1, "b",  100, 10 };
    BankAccount.Deposit(100);
    BankAccount.Withdraw(50);
    SavingsAccount.percents();
    return 0;
}


