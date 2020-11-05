#include <iostream>
using namespace std;
int gcd(int ,int);
int main()
{
    int t,k,d,p;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //enter the number of kids
        cin>>k;
        p=k*4;
        while(p)
        {
            if(gcd(1,p)==1)
            {
                d=gcd(1,p);
                if(sizeof(d)==sizeof(k))
                cout<<d;
                break;

            }
            p--;
            break;
            
        }
        



    }
    return 0;
}
int gcd(int a, int b)
{
	if (a == 0)
	return b;
	if (b == 0)
	return a;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}


