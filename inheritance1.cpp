#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
        int age;
        string color;
        void run()
        {
            cout<<"running";

        }
};
class Dog: public Animal
{
    public:
        string petname;
        void bark()
        {
            cout<<"barking";

        }
       
};
class Lion :public Animal
{
    public:
        int age;
        string color;
        string petname;
        void roar()
        {
            cout<<"roaring";

        }
        //void displaydetails();
        
};
void 
int main()
{
    Dog dog;
    //dog.age=13;
    //dog.color="black";
    dog.petname="kutta";
    cout<<dog.age<<endl<<dog.color<<dog.petname<<endl;
    dog.run();
    dog.bark();

    Lion lion;
    //lion.age=14;
    //lion.color="white";
    lion.petname="humara";
    cout<<lion.age<<endl<<lion.color<<endl<<lion.petname<<endl;
    Animal animal;
    animal.age=90;
    animal.color="black";


    return 0;
}

