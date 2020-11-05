#include<iostream>
using namespace std;
int main()
{
    int data[]={12,56,78,42,2};
    int n=5,temp;
    for(int step=0;step<n-1;++step)
    {
        for(int i=0;i<n-step-1;++i)
        if(data[i]>data[i+1])
        {
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;

        }
    }
    for(int i=0;i<n;++i)
cout<<data[i]<<" ";
return 0;
}
