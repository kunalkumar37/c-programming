#include<iostream>
#include<string>
using namespace std;
class Dog// similarly constructor is inside and outside the class always 
{
public:
    int age;
    string color;
    string breed;
    string pet_name;

    ~Employee();

   /* Dog()// constructor !!!actually compiler automatically create  constructor during running of code
    {
        cout<<endl<<"these are the details of dog !!\n\n";
    }
    */
   Dog();
void displaydetails();
};
Employee::~employee()
{
    cout<<"deletion of object!";
}
Dog :: Dog()        //default constructor doesn.t contain any parameter 
{
            cout<<endl<<"these are the details of dog !!\n\n";

}
void Dog::displaydetails()         //outside the class method 
{
    cout<<age<<endl<<color<<endl<<breed<<endl<<pet_name;
}
int main()
{
    Dog d1;
    d1.age=20;
    d1.color="black";
    d1.breed ="american";
    d1.pet_name="kutta";
    d1.displaydetails();
    Dog d2;
    d2.age=90;
    d2.color="white";
    d2.breed="african";
    d2.pet_name="kutiya";
    d2.displaydetails();
    Dog d3=d2;           //copy constructor
    d3.age=30;
    d3.displaydetails();

    
    return 0;

    
}