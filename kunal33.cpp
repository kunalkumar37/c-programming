#include<iostream>
using namespace std;
void add(int,int);
void add(string,string);
void add(int ,int,int);
int main()
{
    add(10,20);
    add("kunal","kumar");
    add(23,34,45);
    return 0;


}
void add(int x,int y)
{
    int result1=x+y;
    cout<<result1<<endl;

}
void add(string p,string q)

{
string result2=p+q;
cout<<result2<<endl;


}
void add(int i,int j,int k)
{
    int result3=i+j+k;;
    cout<<result3<<endl;

}