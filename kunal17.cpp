
#include<iostream>
using namespace std;
int con(string s1,vector <int> v1)
{
    int i,found;
   

    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='A')
            v1[0]--;
        
       else if(s1[i]=='C')
            v1[1]--;
        
         if(s1[i]=='G')
            v1[2]--;
        
         if(s1[i]=='T')
            v1[3]--;
    }
    
    for(i=0;i<4;i++)
    {
        if(v1[i]>0)
            return 0;
    }
     return 1;   
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   long int n;
    cin>>n;
    string s;
    cin>>s;
    vector <int> v(4,0);
    long int i,j=0;
    
    v[0]=count(s.begin(),s.end(),'A');
    v[1]=count(s.begin(),s.end(),'C');
    v[2]=count(s.begin(),s.end(),'G');
    v[3]=count(s.begin(),s.end(),'T');
 
    
   for(i=0;i<4;i++)
   {
       if(v[i]!=(n/4))
           break;
   }
   
    if(i==4)
    {
        cout<<"0";
        return 0;
    }
    
   long int k;
   vector <int> v1(4,0);
    
    for(i=0;i<4;i++)
        if(v[i]>(n/4))
            v1[i]=v[i]-(n/4);
   
   int flag=0;
   int len=(v1[0]+v1[1]+v1[2]+v1[3]);
   string s1;
   int l;
   
    for(l=len;l<=n;l++)
    {
        for(i=0;i<=(n-len);i++)
        {
            s1=s.substr(i,l);
        
            if(con(s1,v1)==1)
            {
                cout<<l;
                flag=1;
                break;
            }
        }
        if(flag)
            break;
            
    }
    
    return 0;
}