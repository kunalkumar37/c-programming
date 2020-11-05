#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,r,number;
    
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>l>>r;
        if((l % number>=number/2) &&(r % number>=number/2))
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