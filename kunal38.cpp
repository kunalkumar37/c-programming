#include<iostream>
using namespace std;
union sample
{
    int x;
    int y;

};
int main()
{
    union sample ptr1;
    ptr1.x=97;
    ptr1.y='B';
    union sample *ptr2=&ptr1;
    cout<<ptr2->x+(*ptr2).y;
    return 0;
}