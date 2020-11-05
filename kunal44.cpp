#include<iostream>
#include<vector>
using namespace std;

int main()

{
vector<int>myvector(5);
for(int i=1;i<5;i++)
    myvector[i]=i;
    myvector.resize(3);
    myvector.resize(4,110);
    myvector.resize(5);
    for (int i=0;i<myvector.size();i++)
    cout<<' '<<myvector[i];
    return 0;
}
