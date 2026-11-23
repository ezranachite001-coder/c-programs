#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
    private:
    string AccountHolderName;
    int AccountNumber;
    int AccountBalance;

    public:
    BankAccount(string HolderName,int A_number,int A_balance)
    {
        AccountHolderName = HolderName;
        AccountNumber = A_number;
        AccountBalance = A_balance;

        cout << "Account successfully created!"<<endl;


    }
    void displayAccount()
    {
        cout <<"=============ACCOUNT DETAILS======="<<endl;
        cout <<"Account holder name: "<<AccountHolderName<<endl;
        cout <<"Account number: "<< AccountNumber<<endl;
        cout <<"Account balance: "<< AccountBalance<<endl;
        cout <<"================================="<<endl;

    }
    ~BankAccount()
    {
        cout <<"Account closed successfully!"<<endl;
    }


};
int main()
{
    BankAccount bankaccount1("Ezra",7734,5000);
    bankaccount1.displayAccount();




    return 0;
}