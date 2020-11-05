#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string toBin(int);
int binaryToDecimal(string);
int main()
{  
    string bno,s;
    int dno,t,dec_value;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&dno); 
        s=toBin(dno);
        printf("%d\n",binaryToDecimal(s));
        
    }
}
string toBin(int dno)
{
    int s=0,remainder,i; string bno;
    i=dno; char c='0';
    while(dno != 0)
    {   
         remainder=dno%2;
         s = s*10 + remainder;
         dno = dno / 2;
         
    }
    bno=to_string(s); reverse(bno.begin(),bno.end()); 
    while(i%2==0)
    {bno.push_back(c); i=i/2;}
    return bno;
}

int binaryToDecimal(string s) 
{   
    int dec_value = 0; 
    // Initializing base value to 1, i.e 2^0 
    int base=1; int w=s.length();
    for (int i =w-1;i>=0;i--)
    {   
        if(s[i]=='1')
            s[i]='0';
        else if(s[i]=='0')
            s[i]='1';
    }
    for (int i =w-1;i>=0;i--) { 
        if (s[i]=='1') 
            dec_value += base; 
        base=base*2; 
    } 
    return dec_value; 
}