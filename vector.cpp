#include<iostream>
#include<vector>
using namespace std;
class Employee
{

}
employee e1,e2,e3;
int main()
{
vector<string>name;         //vector is similar to array but it can changes size 
name.push_back("kunal");
name.push_back("kajal");
name.push_back("kishan");
cout<<"size of ::"<<name.size()<<endl;
cout<<"the name of the element at size of index 0!!!"<<name[0]<<endl;
name.pop_block();
cout<<"size::  "<<name.size()<<endl;
name[0]="aditya";
cout<<"element at index 0"<<name[0]<<endl;
return 0;

}