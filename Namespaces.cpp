// Discuss the usage of the following namespaces/ header file library 

# include <iostream>
# include <chrono> //manipulates the time

using namespace std;
using namespace chrono;

int main() 
{
    auto start = high_resolution_clock::now();

    // Function
    string sentence;
    cout << "Type the following statement: The quick fox jumps over the lazy dog.\n";
    cout << "Type here: ";
    getline(cin, sentence);
    cout << "The sentence you typed: " << sentence << endl;

    auto end = high_resolution_clock::now();
    duration<double> duration = end - start;
    cout << "Time elapsed since you started writing the sentence: " << duration.count() << "seconds\n";
    return 0;
}



# include <filesystem> //simplify file system operations
# include <vector> //manipulates the time
# include <map> //manipulates the time
# include <fstream> //manipulates the time
// # include <this_thread> //manipulates the time
# include <set> //manipulates the time
# include <tuple> //manipulates the time
# include <random> //manipulates the time

