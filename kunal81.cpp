#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()

{
    ll t,n,k,arr[10000];
    ll sum=0,day=0,flag=0;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<k)
            {
                //flag=1;
                day=i;
                break;
            }
            arr[i+1]+=(arr[i]-k);
        }
        flag=(arr[k-1]/k)-k;
        if(flag==0)
        {
            printf("%d",flag);

        }
        else
        {
            day=(sum/k)+1;
            printf("%d",day);
        }
        
    
    }
    return 0;

}