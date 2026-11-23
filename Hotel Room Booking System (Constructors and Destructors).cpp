#include <iostream>
#include <string.h>
using namespace std;

class RoomBooking
{
    private:
    string GuestName;
    int RoomNumber;
    int NumberOfDaysBooked;

    public:
    RoomBooking(string name,int R_number,int Days_booked)
    {
        GuestName = name;
        RoomNumber = R_number;
        NumberOfDaysBooked = Days_booked;

        


    }
    void displayBooking()
    {
        cout <<"=============BOOKING DETAILS======="<<endl;
        cout <<"Name of the guest: "<<GuestName<<endl;
        cout <<"Room number: "<<RoomNumber<<endl;
        cout <<"Days booked: "<<NumberOfDaysBooked<<endl;
        cout <<"================================="<<endl;

    }
    ~RoomBooking()
    {
        cout <<"Booking ended"<<endl;
    }


};
int main()
{
    RoomBooking rb1("Becky",051,2);
    rb1.displayBooking();




    return 0;
}