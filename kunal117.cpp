#include<iostream>
using namespace std;
int main()
{
    int t,d;
    int  p,q;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>p>>q;

    }
    for(int d=p;p>1;p--)
    {
        if(p/d==0)
        {
            if(d/q!=0)
            {
                cout<<p;


            }
        }
        else
        {
            while(d=p)
            if(p/d!=0)
            {
                d--;

            }
        }
        
    }
    return 0;
}