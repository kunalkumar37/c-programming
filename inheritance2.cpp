#include <iostream>
#include <string>
using namespace std;
class Person
{
    public:
        int age;

        string fullname;
        string phonenumber;
        string schoolname;

};


class Student:public Person {

    public:
        int studentId;
        
        
        void study() {
            cout << "Studying" << endl;
        }
};

class Employee :public Person {

    public:
        int employeeId;
    
        
        void work() {
            cout << "Working" << endl;
        }
};


int main() {


    return 0;
}