#include<iostream>
using namespace std;
int main()

{
    int a[]={10,20,30,40,50,60}, *p;
    p=a+5;
    int i=0;
    while(i<3)
    {
        cout<<p[-i]<<" ";
        p++;
        i++;

    }
    return 0;
}