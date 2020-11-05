#include<iostream>
using namespace std;
int main(){
    int c, n, max = 0;
    std::cin.ignore();
    while(std::cin >> n)
        max < n ? c = !!(max = n) : c += max == n;
    std::cout << c;
    return 0;
}
 while
 { (std::cin >> n)
 
    if(max < n) 
    { 
        max = n;
        c = 1; 
    }
    else { 
        if (max == n)
            c++; 
    }
 }