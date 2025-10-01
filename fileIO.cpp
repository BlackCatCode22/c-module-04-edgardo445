#include <iostream>
#include <fstream>
using namespace std;



int main() {
fstream myFile;
    myFile.open("arrivingAnimals.txt", ios::in);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }
myFile.close();


    }

system("pause");
    return 0;
}