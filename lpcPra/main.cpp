#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main(int argc, char **argv)
{
    // check if the file input is correct
    if(argc != 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }
    // read the file
    ifstream infile(argv[1]);
    // check if the file is open
    if (!infile.is_open()) {
        cout << "Could not open file: " << argv[1] << endl;
        return 1;
    }
    //
    vector<int> memory(100, 0);
    int read = 0;
    int index = 0;
    unsigned short error = 0;
    while(infile >> read) {
        if(index >= 100) {
            cout << "***FATAL ERROR - Memory Overflow****" << endl;
            return 1;
        }
        if(read == -99999) {
            break;
        }
        if(read > 9999 || (read < -9999 && read != -99999)) {
            cout << "***Fatal Error:  #" << read << " is out of bounds***" << endl;
        }
        memory[index] = read;
        index++;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.