#include <iostream>

using namespace std;

void add(int a, int b) 
{

    cout << a + b;
}
typedef(add *fp);


int main()
{
    int a,b;
    cin >>a>>b;
    (*fp)(a,b);
    return 0;
}