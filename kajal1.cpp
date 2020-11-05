#include<iostream>
using namespace std;
namespace first {
    int x = 5;
}
 
namespace second {
    double x = 3.14;
}
 
int main () {
     
int result;
       result = first :: x + second :: x; 
       cout << result;
return 0;
}