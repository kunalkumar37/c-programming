#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[i])
             temp=arr[j];
            arr[i]==arr[j];
            temp=arr[i];

        }
        cout<<arr[i]<<endl;
    }
   
    return 0;
}