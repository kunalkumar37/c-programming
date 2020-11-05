#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the value of a and b::\n";
    int a,b;
    cin>>a;
    cin>>b;
    int result=a/b;
    try
    {
        if(b==0)
        {
            throw "hey you entered b==0!!";
        }
    }
    catch(const char *msg)
    {
        cout<<msg<<endl<<endl;

    }
    cout<<result;

    cout<<"the program ends!!!!!";
    return 0;
    



}