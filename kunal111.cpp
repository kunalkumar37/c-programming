#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<string> myset={"first","third"};
    string mystring="tenth";
    myset.insert(mystring);
    cout<<"my set contains"<<endl;
    for(const string& x:myset)
    {
        cout<<x<<" ";

    }
    cout<<endl;
    return 0;

}