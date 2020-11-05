#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
vector<int> v={0,1,2,3,4,5};
for(auto i:v)
{
cout<<i<<" ";
cout<<"\n";
}
int a[]={0,1,2,3,4,5};
for(int n:a)
{
    cout<<n<<" ";
    cout<<endl;

}
for(int n:a)
{
    cout<<"IN LOOP"<<" ";
    cout<<"\n";

}
string str="geeks";
for(char c:str)
cout<<c<<" "<<endl;
map<int,int> MAP({{1,1},{2,2},{3,3}});
for(auto i:MAP)
cout<<"{"<<i.first<<" ,"<<i.second<<"}"<<endl;

return 0;
}