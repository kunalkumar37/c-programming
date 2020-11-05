#include<bits/stdc++.h>
using  namespace std;
int main()
    {
        int arr[1000];
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        


    }
int compare(string x,string y)
{
    string xy=x.append(y);
    string yx=y.append(x);
    return xy.comapre(yx)>0?1:0;

}
void 
