#include<iostream>
using namespace std;
namespace jp
{
    float money=9.08;

    double to_dollar( float ruppes)
    {
        return ruppes/money;

    }

}
namespace american

{
    float money=6.78;
    double to_dollar(float ruppes)
    {
        return ruppes/money;

    }

}
int main()
{
    cout<<"money in japan(jp)"<<jp::money<<endl;
    cout<<"money in USA (american)"<<american::money<<endl;
    cout<<"convert currencies"<<jp::to_dollar(54.78)<<endl;
    cout<<"converter"<<american::to_dollar(78.98)<<endl;


    return 0; 
}