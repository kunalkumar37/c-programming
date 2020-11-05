#include<bits/stdc++.h>
using namespace std;
typedef long l;
int main()
{
    l t,n;
    //string must of size even
    l str[];


    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n/2==0)
        {
        cin>>str[n];
        for(int j=0;j<n;j++)
        {
            if(str[j]!=str[j+1])
            {
                cout<<"0";
            }
            else
            {
                cout<<result;
            }
            
        }
        }


    }
    return 0;
}
void countToMake0lternate(const string& s) 
{ 
    int result = 0; 
  
    for (int i = 0; i < (s.length() - 1); i++) 
  
        
        if (s[i] == s[i + 1]) 
            result++; 
  
    return result; 
} 