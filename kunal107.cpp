#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> g1;
    for(int i=1;i<=10;i++)
    {
        g1.push_back(i*10);

    }
    cout<<"\n refreance operator[g]:g1[2]="<<g1[2];
    cout<<"\n at:g1.at(4)=="<<g1.at(4);
    cout<<"\n front():g1.front()=="<<g1.front();
    cout<<"\n back():g1.back()=="<<g1.back();
    int* pos=g1.data();
    cout<<"\nthe first element is"<<*pos;
    

return 0;
}
