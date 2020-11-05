#include<iostream>
#include<string>
using namespace std;
class Employee
{
    public://accsess specifier
        int id;      //attributes
        string firstname;
        string lastname;
        int money;
        string rank;
        string getfullname()
        {//whenever function is defined in inner of any class then function is only defined not call
            return firstname+" "+lastname;
        }
void displaydetails();      


};
void Employee::displaydetails()
{
    cout<<id<<endl<<firstname<<lastname<<"\n" <<money<<endl<<rank;
}

int main()

{
    //without class object is nothing and object is under the main function

    Employee e1;
    e1.id=1;
    e1.firstname="kunal";
    e1.lastname="kumar";
    e1.rank="C.E.O";
    e1.money=20000;


    e1.displaydetails();

    //string fullname1=e1.getfullname();
    //cout<<e1.id<<endl<<e1.firstname<<endl<<e1.lastname<<endl<<e1.rank<<endl<<e1.money<<e1.getfullname();


    Employee e2;
    e2.id=2;
    e2.firstname="kajal";
    e2.lastname="kumari";
    e2.rank="manager";
    e2.money=25000;
    e2.displaydetails();

    //cout<<e2.id<<endl<<e2.firstname<<e2.lastname<<endl<<e2.getfullname();

    return 0;
}