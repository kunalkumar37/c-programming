#include<iostream>
//#include<algorithm>
using namespace std;
int main()
{
    int a[]={5,20,15};
    int *arr[3]={a,a+1,a+2};
    cout<< *arr[*arr[1]-19];
    return 0;
}
