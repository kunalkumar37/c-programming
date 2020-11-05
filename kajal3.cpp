#include <iostream>
using namespace std;
 
void writeOnFile(string);
void readFromFile(string);
 
int main() {
 
    string name;
    puts("Enter file name: ");
    getline(cin, name);            // Statement 1
    writeOnFile(name);
     readFromFile(name);        // Statement 2
 
    return 0;
}
 
void writeOnFile(string fileName) {
 
    ofstream ofs;
    ofs.open(fileName);
    ofs << "Hi! \n";                            // Statement 3
    ofs << "\"This is reading comprehension.\" ";         // Statement 4
    ofs << "And this is amazing." << endl;            // Statement 5
    ofs.close();
}
 
void readFromFile(string fileName) {
 
    ifstream ifs;
    string str;
    ifs.open(fileName);
 
    while(!ifs.eof()) {         
        getline(ifs, str);
        cout << str << endl;     
    }
    ifs.close();
}