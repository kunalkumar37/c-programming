#include<iostream>
using namespace std;
class shape
{
    public:
        virtual void getarea()=0;
        virtual void getperimeter()=0;


};
class Rectangle:public Shape
{
    public:
        int l;
        int b;
        void get area()
        {
        return l*b;
        }
};
class Square:public Shape
{
    public:
        int a;
        void getarea()
        {
        return a*a;
        }
}