#include<bits/stdc++.h>
using namespace std;
int main()

{
    int arr[100],x,t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<=n;i++)
        {
            cin>>arr[i];

        }
        if (sizeof(arr[i]%2!=0))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    }
    return 0;
}