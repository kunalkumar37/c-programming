#include<iostream>
using namespace std;
class Animal
{
    public:
        virtual void sound()=0;
        virtual void sleep()
        {
            cout<<"this is sleeping!!";

        }
};
class Dog:public Animal
{
  
}