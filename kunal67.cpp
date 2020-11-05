#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000],x,t,n;
    cin>>t;//input the number of test cases
    while(t--)
    {
        cin>>n;//input the size of array
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
    }

}
void gcd(int a ,int b)
{
    if(a==0)
    return a;
    if(b==0)
    return b;
    if(a==b)
    return a;
    if(a>b)
        return gcd(a-b,b);
    else
    return gcd(a,b-a);

    
}