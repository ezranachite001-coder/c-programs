#include <iostream>
#include <string>
using namespace std;

class Student
{
    //member variables
    public:
    string StudentName;
    int Admissionnumber;
    int FeeBalance;

    //member functions
    void inputDetails()
    {
        cout <<"Enter Name of student: ";
        cin >> StudentName;
        cout <<"Enter Admission Number: ";
        cin >> Admissionnumber;
        cout <<"Enter fee balance: ";
        cin >> FeeBalance;
    }
    
    void makepayment()
    {
        int payment_done;
        cout << "Enter amount you would like to pay: ";
        cin >> payment_done;

        if(payment_done > 0 && payment_done <= FeeBalance )
        {
            FeeBalance -=payment_done;
            cout <<"Payment succesful"<<endl;
        }
        else
        {
            cout <<"Try a valid amount"<<endl;
        }

    }
    void displayStatus()
    {
        int remaining_balance;
        remaining_balance = FeeBalance;




        cout <<"==========PAYMENT RECEIPT========"<<endl;
        cout <<"Name of student: "<<StudentName<<endl;
        cout <<"Admission number: "<<Admissionnumber<<endl;
        cout <<"Remaining fee balance: "<<remaining_balance<<endl;
        cout <<"================================="<<endl;
    }

};
int main()
{
    Student student1;
    student1.inputDetails();
    student1.makepayment();
    student1.displayStatus();




    return 0;
}
