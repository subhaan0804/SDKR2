#include <iostream>
#include <fstream>
using namespace std;

// creating and writing to file;
int main() {
    // create and open a text file
    ofstream myfile("text1.txt");

    myfile << "Files can be tricky, but it is fun enough!";

    myfile.close();
    return 0;
}