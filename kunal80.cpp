#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll t;
cin>>t;
while(t--)
{
    ll n,k,x,y;
    cin>>n>>k>>x>>y;
ll count[n]={0},flag=0;
while(1)
{
    if (count[x])
    {
        flag=1;
        break;

    }
    count[x]++;
    x=(x+k)%n;
    if(count[y])
    {
        flag=2;
        break;
    }

}
if(k==0 || k==n)
{
    if(x==y)
    
        cout<<"YES\n";
        else
        
            cout<<"NO\n";

        
        
    
}
else if(flag==2)
    cout<<"YES\n";
else
    cout<<"NO\n";

    

    return 0;
}
}