#include<iostream>
using namespace std;
int main()
{
    int n,temp,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int counter=1;
    while(counter<n-1)
    {
        for(int i=0;i<counter-1;i++)
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i+1]=arr[i];
            temp=arr[i+1];

        }
        counter++;
    }
    for(int i=0;i<n;i++)
        {
        cout<<arr[i];
        }
    return 0;
}