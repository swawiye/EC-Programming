# include <iostream>
# include <fstream>
# include <string>

using namespace std;

int main() 
{
    // Writing into a file "output.txt" file will be created if it does not exist in the directory of this source file
    ofstream outFile("output.txt");
    outFile << "Writing to a file." << endl;
    outFile.close();
    // Reading from a file 
    ifstream inFile("output.txt");
    string content;
    while (std::getline(inFile, content))
    {
        cout << content << endl;
    }
    inFile.close(); //close the file after reading its contents

    // return 0;

    //Ex: Read a txt file
    ifstream inFile("example.txt");
    string content;
    while (std::getline(inFile, content))
    {
        cout << content << endl;
    }
    inFile.close();

    return 0;
}
