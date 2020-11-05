#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> g1;
    for(int i=1;i<=5;++i)
    {
        g1.push_back(i);

    }
    cout<<"size is:::"<<g1.size();
    cout<<"\ncapacity:::"<<g1.capacity();
    cout<<"\nMAX_SIZE:::"<<g1.max_size();
    g1.resize(6);
    cout<<"\nsize is:::"<<g1.size();
    if(g1.empty()==false)
    cout<<"\nvector is not empty";
    else
    {
        cout<<"\n vector is not empty";

    }
    g1.shrink_to_fit();
    cout<<"\n vector elements are::";
    for(auto i=g1.begin();i!=g1.end();++i)
    {
        cout<<*i<<" ";

    }
    return 0;
    
}