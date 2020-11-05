#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> g1;
    for(int i=1;i<=5;i++)
    {
        g1.push_back(i);

    }
    cout<<"the number are there ";
    for(auto i=g1.begin();i!=g1.end();++i)
    cout<<*i<<" "<<endl;// if they give the output in space sepreated way
    for(auto i=g1.cbegin();i!=g1.cend();++i)
    cout<<*i<<" ";
    //cout<<"output of rbegin and rend";
    for(auto ir=g1.rbegin();ir!=g1.rbegin();++ir)

    cout<<*ir<<" ";
    for(auto ir=g1.rend();ir!=g1.rend();++ir)
    {
        cout<< *ir<<" ";
    }
    return 0;
}