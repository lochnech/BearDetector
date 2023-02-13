#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

int main() {
    fstream indata;

//    changing the file address given in following line will change the file being read from
//    indata.open(../nonBearFile.txt)
    indata.open("../bearFile.txt");

    string first;
    getline(indata, first);

    istringstream iss(first);

    bool found = false;
    do {
        string s;
        iss >> s;

        if (s == "bear") {
            found = true;
        }
    } while (iss);

    if (found) {
        cout << "The first line of this file contains the word 'bear'";
    } else {
        cout << "The first line of this file does not contain the word 'bear'";
    }

    return 0;
}
