#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define CLEAR_FILE 1
string userInputContent();
string userInputFileName();
void writeInFile(string fileName, string content);
void readFile(string fileName);
void clearFile(string fileName);

int main()
{
    string fileName = userInputFileName();
    string content = userInputContent();
   //int fileSize = fileName.size();
   // cout<< "fileName size = " << fileSize << "\n";
    writeInFile(fileName, content);
    readFile(fileName);
    clearFile(fileName);


    system("PAUSE");
    return 0;
}

string userInputFileName()
{
    string text;
    cout<<"Enter file name: ";
    cin>>text;
    return text;
}
string userInputContent()
{
    string text;
    cout<<"Writing in the file: ";
    //cin>>text;
    std::getline (cin, text);
    cout<<"text = " << text << "\n";

    return text;
}
void writeInFile(string fileName, string content)
{
    ofstream myfile;
    myfile.open (fileName.c_str());
    myfile << content;
    myfile.close();
}
void readFile(string fileName)
{
    string fileContent;
    cout<<"Reading the file: ";
    ifstream infile;
    infile.open(fileName.c_str());
    cout << fileContent << endl;
    infile.close();
}

void clearFile(string fileName)
{
    ofstream myfile;
    cout<<"Do you want to clear the data in the file ? < 1 - yes; 0 - no >:\n";
    int clear;
    cin>>clear;
    if(CLEAR_FILE == clear)
    {
        myfile.open (fileName.c_str());
        myfile.clear();
        myfile.close();
        cout<<"Data cleared.\n";
    }
}
