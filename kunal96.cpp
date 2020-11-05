#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    int k,n,m,f,d,sum=0;
    ll arr[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k>>m;
        for(int j=0;j<k;j++)
        {
            cin>>arr[j];
            
            
        }
        for(int j=0;j<k;j++)
        {
            sum=sum+arr[j];
        }

         if(sum==m)
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




