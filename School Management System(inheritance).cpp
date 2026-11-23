#include <iostream>
#include <string>
using namespace std;
class Person
{
    public:
    string Name;
    int Age;

    public:
    Person(string name,int age)
    {
        Name = name;
        Age = age;
    }
    void displayPerson()
    {
        cout <<"======PERSON DETAILS====="<<endl;
        cout <<"Name: "<<Name<<endl;
        cout <<"Age: "<<Age<<endl;
        cout <<"========================="<<endl;

    }
};
class Student:public Person
{
    private:
    int AdmissionNumber;
    int Class;

    public:
    Student(string name,int age,int adm_no,int c):Person(name,age)
    {
         AdmissionNumber = adm_no;
         Class = c;

    }

    void displayStudent()
    {
        cout <<"======Student DETAILS====="<<endl;
        cout <<"Name: "<<Name<<endl;
        cout <<"Age: "<<Age<<endl;
        cout <<"Admission Number: "<<AdmissionNumber<<endl;
        cout <<"Class: "<<Class<<endl;
        cout <<"========================="<<endl;

    }
};
int main ()
{
    Student s1("Ezra",19,7334,7);
    s1.displayStudent();
    return 0;
}