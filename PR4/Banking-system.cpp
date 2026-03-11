#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount {
protected:
    int accountNumber;
    string accountHolderName;

private:
    double balance;

public:
    BankAccount(int accNo, string name, double initialBal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = initialBal;
    }

    virtual ~BankAccount() {}

    double getBalance() const {
        return balance;
    }
    
    int getAccountNumber() const {
        return accountNumber;
    }

protected:
    void setBalance(double newBalance) {
        balance = newBalance;
    }

public:
    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    virtual void displayAccountInfo() const {
        cout << "Acc No: " << accountNumber << endl;
        cout << "Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void calculateInterest() {
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate) 
        : BankAccount(accNo, name, bal) {
        interestRate = rate;
    }

    void calculateInterest() override {
        double interest = getBalance() * (interestRate / 100.0);
        cout << "Interest: " << interest << endl;
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Rate: " << interestRate << endl;
    }
};

class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal) {
        overdraftLimit = limit;
    }

    bool checkOverdraft(double withdrawalAmount) {
        if (withdrawalAmount > (getBalance() + overdraftLimit)) {
            return true;
        }
        return false;
    }

    void withdraw(double amount) override {
        if (amount > 0) {
            if (!checkOverdraft(amount)) {
                setBalance(getBalance() - amount);
            }
        }
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Limit: " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount {
private:
    int term; 

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal) {
        term = t;
    }

    void calculateInterest() override {
        double annualRate = 6.5; 
        double interest = getBalance() * (annualRate / 100.0) * (term / 12.0);
        cout << "Interest: " << interest << endl;
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Term: " << term << endl;
    }
};

int findAccount(const vector<BankAccount*>& accounts, int accNo) {
    for (size_t i = 0; i < accounts.size(); i++) {
        if (accounts[i]->getAccountNumber() == accNo) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<BankAccount*> accounts;
    int choice;

    do {
        cout << "\n1.Savings 2.Checking 3.FixedDeposit 4.Deposit 5.Withdraw 6.Display 7.Interest 8.Exit\nChoice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            int accNo;
            string name;
            double bal;
            
            cout << "AccNo: ";
            cin >> accNo;
            cout << "Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Balance: ";
            cin >> bal;

            if (choice == 1) {
                double rate;
                cout << "Rate: ";
                cin >> rate;
                accounts.push_back(new SavingsAccount(accNo, name, bal, rate));
            } else if (choice == 2) {
                double limit;
                cout << "Limit: ";
                cin >> limit;
                accounts.push_back(new CheckingAccount(accNo, name, bal, limit));
            } else if (choice == 3) {
                int term;
                cout << "Term: ";
                cin >> term;
                accounts.push_back(new FixedDepositAccount(accNo, name, bal, term));
            }
        } 
        else if (choice >= 4 && choice <= 7) {
            int accNo;
            cout << "AccNo: ";
            cin >> accNo;
            
            int index = findAccount(accounts, accNo);
            
            if (index != -1) {
                if (choice == 4) {
                    double amt;
                    cout << "Amount: ";
                    cin >> amt;
                    accounts[index]->deposit(amt);
                } else if (choice == 5) {
                    double amt;
                    cout << "Amount: ";
                    cin >> amt;
                    accounts[index]->withdraw(amt);
                } else if (choice == 6) {
                    accounts[index]->displayAccountInfo();
                } else if (choice == 7) {
                    accounts[index]->calculateInterest(); 
                }
            } else {
                cout << "Not found" << endl;
            }
        } 
    } while (choice != 8);

    for (size_t i = 0; i < accounts.size(); i++) {
        delete accounts[i];
    }

    return 0;
}