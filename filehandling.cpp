#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("mynote.txt");
    ofile<<"hi"<<endl;
    ofile<<"i love to travel";
    ofile<<"hey i am kuna kumar \n";
    ofile.close();
    return 0;
}