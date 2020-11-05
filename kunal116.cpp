#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j,arr[50];
    int arr1[50];
    long x;
    cin>>t;
    cin>>n>>x;
    for(int i=0;i<x;i++)

    {
          cin>>n>>x;
          for(int j=0;j<n;j++)
          {
              cin>>arr[j];
              cin>>arr1[j];

          }
          for(int z=0;z<n;z++)

          {
              //int check ;
              if((arr[j]+arr1[z])>=x)
              {
                    cout<<"YES";
              }
              else
              {
                  cout<<"NO";
              }
              
          }
    }
return 0;
}