#include <iostream>
#include <string>
using namespace std;

class Book
{
    //member variables
    public:
    string BookTitle;
    string Author;
    int CopiesAvailable;
    
    //member functions
    void inputDetails()
    {
        cout <<"Enter book title: ";
        cin >> BookTitle;
        cout <<"Enter Author: ";
        cin >> Author;
        cout <<"Enter number of copies available: ";
        cin >> CopiesAvailable;
    }
    void borrowBook()
    {
        int borrowed_book;
        cout << "Enter number of copies you would like to borrow: ";
        cin >> borrowed_book;

        if(borrowed_book>CopiesAvailable)
        {
            cout <<"Only" <<    CopiesAvailable << " are available,TRY LESS NUMBER OF COPIES! "<<endl;
        }
        else
        {
            CopiesAvailable -= borrowed_book;
        }
    
    }
    void displayDetails()
    {
        cout <<"==========BOOK DETAILS========"<<endl;
        cout <<"Book title: "<<BookTitle<<endl;
        cout <<"Author: "<<Author<<endl;
        cout <<"Remaining copies: "<<CopiesAvailable<<endl;
        cout <<"=============================="<<endl;
    }

};
int main()
{
    Book book1;
    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetails();

    return 0;
}