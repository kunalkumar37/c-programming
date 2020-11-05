#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int myxor(int ,int);
int main()
{
    ll t;
    int a,b;
    int sum;
    for(int i=0;i<=t;i++)
    {
        cin>>a>>b;
        int y=rand();
        int z=myxor(a,y);
        int k=myxor(b,y);
        sum=z+k;
        cout<<sum;

return 0;

    }
}
int myxor(int x,int y)
{

    int res=0;
    for(int i=31;i>=0;i--)
    {
        bool b1=x & (1<<i);
        bool b2=y & (1<<i);
        bool xoredbit=(b1 & b2)?0:(b1|b2);
        res <<=1;
        res |=xoredbit;

    }
    return res;

}