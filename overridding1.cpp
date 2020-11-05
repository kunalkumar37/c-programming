#include<iostream>
#include<string>
using namespace std;
class Animal
{
    public:
        void sound()
        {
            cout<<"aninmal always make sound!!"<<endl;

        }
        void sleep()
        {
            cout<<"sleep is most important things for animal!!!"<<endl;

        }
};


class Dog:public Animal
{
public:

    void sound()
    {
        cout<<"how do they make sound!!"<<endl;

    }
    void sleep()
    {
        cout<<"they sleep wwell like a rich man is his /her house!!"<<endl;
    }
};
int main()
{
    Animal animal;;
    animal.sound();
    animal.sleep();
    Dog dog;
    dog.sleep();
    dog.sound();
    return 0;
}
