#include<iostream>
#include<cmath>
typedef long ll;
using namespace std;
int findQuadruples(int a[],int b[],int c[],int d[]);
int main()
{
  ll n;
  int k;
  cin>>n>>k;
  int s=findQuadruples();
  cout<<s;
  
}
      
      
int findQuadruples(int a, int b, int c, int d, 
                    int x, int n) 
{ 
    int count = 0; 
    for (int i = 0 ; i < n ; i++) 
        for (int j = 0 ; j < n ; j++) 
            for (int  k = 0 ; k < n ; k++) 
                for (int l = 0 ; l < n ; l++) 
  
                    
                    if ((a[i]+b[j]-c[k]-d[l])==k) 
                        count++; 
  
    return count; 
} 