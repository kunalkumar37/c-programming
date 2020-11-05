#include<iostream>
#include<algorithm>
using namespace std;
//comparre function pointer
bool compare(int i,int j)
{
return (i>j);
}
int main()
{
    int data[]={32,45,78,89,20};
    sort(data,data+5,compare);
    for(int i=0;i<5;i++)
    {
        cout<<data[i] <<" ";
        return 0;
    }
}