#include<iostream>
#include<string>
using namespace std;
void display(int,float,string message="welcome by default!!");   //default parametr always on right side

int main()
{
display(30,35.45,"kunalkumar");
display(34,78.898);

return 0;
}
void display(int x,float y,string kumar)
{
    cout<<"x=="<<x<<endl;
    cout<<"y=="<<y<<endl;
    cout<<"kumar=="<<kumar<<endl;

}