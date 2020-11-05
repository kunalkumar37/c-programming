#include<iostream>
using namespace std;
#define AND &&
#define OR ||
int main()
{
    int x,y,f;
    cout <<"enter the number you want ";
    cin >> x,y,f;
    if((x>5 OR y<20)AND(f=30))
    cout<<"yes your windows ";
    else
    {
        cout<<"your linux";

    }
    return 0;

}
