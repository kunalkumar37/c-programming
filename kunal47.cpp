#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int i,int j)
{
    return (i>j);

}
int main()

{
    int data[]={40,30,90,10,20,50,70,60,80};
    sort(data,data+9,compare);
    for(int i=0;i<9;i++)
    cout<<data[i]<<" ";
    return 0;
}