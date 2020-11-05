#include <fstream>
#include <iostream>
using namespace std;


int main() {

	// The string will hold the text present in each line on the file.
	string str;

	// Create ifstream (Input File Stream) object.
	ifstream iFile;

	// Open the file.
	iFile.open("mynote.txt");

	// Use a while loop together with the getline() function to read the file line by line.
	while(!iFile.eof()) {			//end of file
		getline(iFile, str);		// Reads a line.
		cout << str << endl;		// Prints the line.
	}

	// Close the opened file.
	iFile.close();

	return 0;
}
