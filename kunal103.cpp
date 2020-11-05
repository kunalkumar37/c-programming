#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,i;
int arr[1000];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        
        //for binary search
        cout<<"enter the number you want to search in binary";
        cin>>t;
        
        for(int i=0;i<n;i++)
        {
            if(t==arr[i])
                
            
                cout<<i;
            
            
            
        }
    
    
  return 0;  
}