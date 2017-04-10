#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class FileIO{
public:
    static void writeDemo(){
    char data [100];
    ofstream outfile;
    outfile.open("outfile.txt", ios::out | ios::app);
    //trunc function use for empty file
    //out means output mode && in for input mode && app means file append
    cout << "Writing to the file" <<endl;
    outfile << "gebon r moja lage na" <<endl;
    int a = 10;
    outfile << a << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    //For string we write getline(cin, data); if data is string
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    outfile << data << endl;
    //outfile.clear();
    outfile.close();
    }
public:
    static void readDemo(){
    char data [100];
    ifstream infile;
    string line;
    infile.open("outfile.txt", ios::in | ios::ate);
    //Here ate is for file character length
    cout << "Reading from the file" << endl;
    size_t fileSize = infile.tellg();
    cout << fileSize << endl;
    /*
    while(getline(infile, line)) {    // Here this line execute for a-z file read and output show in console
        cout << line << endl;
    }
    */
    /*infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    */
    infile.close();
    }

};
int main(){
    FileIO f;
    //f.writeDemo();
    f.readDemo();
}

