#include<iostream>
#include<string>
using namespace std;
string getfullname(string,string);
int main()
{
string firstname;
string lastname;
cout<<"enter the first name"<<endl;
cin>>firstname;
cout<<"enter the last name"<<endl;
cin>>lastname;

string fullname= getfullname(firstname,lastname);
cout<<fullname;
int length=firstname.length();
cout<<endl<<"the length of firstname is !!!!!!!!"<<length;
int result=firstname.compare(lastname);
cout<<endl<<"when compare is!!"<<result;
return 0;

}
string getfullname(string x,string y)
{
    string fullname=x+" "+y;
    return fullname;

}