#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
    if (arr[i]==x)
    return i;

    }
    return -1;


}
int main()
{
    int arr[]={1,2,30,45,56};
    int x=45;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<x <<"at the index of   "<<search(arr,n,x);
    return 0;

}