#include<iostream>
#include<cstring>
#include<sstream>
#include<exception>
using namespace std;
bool checkusername(string username)
{
    bool isvalid=true;
    int n=username.length();
    if(n<5)
    {
        throw badlengthexception(n);

    }
    for (int i=0;i<n-1;i++)
    {
        if(username[i]=="w" && username[i+1]=="w")
        {
            isvalid=false;

        }
    }
    return isvalid;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string username;
        cin>>username;
        try
        {
            bool isvalid=checkusername(username);
            if(isvalid)
            {
                cout<<"valid"<<'\n';

            }
            else
            {
                cout<<"invalid"<<'\n';

        
            }
            
        }
        catch(badlengthexception e)

        {
            cout<<"too short:"<<e.what()<<'\n';

        }
        
    }
    return 0;

}