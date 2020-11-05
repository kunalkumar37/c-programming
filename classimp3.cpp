#include <iostream>
#include <string>
using namespace std;

class Dog {

    public:
        string breed;
        int age;
        string color;
        string petName;
        dog(string,int,string,string);

        void displayDetails();

        Dog();
};
Dog:: dog(string breed,int age,string color ,string petname )
        {
            this->breed=breed;
            this->age=age;
            this->color=color;
            this->petName=petname;

        }

Dog :: Dog() {
    cout << "Dog object created\n";
}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {
    Dog dog1("dalmation",2,"white_black","jackie",);
    Dog dog2("beagle",4,"brown","pluto");

    

    return 0;
}