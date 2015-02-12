#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void New_File();
void File_Write(string FileName);
void File_Read(string FileName);


int main()
{
    void New_File();
    void File_Write(string FileName);
    void File_Read(string FileName);
    return 0;
}

void New_File()
{
    string FileName;
    ofstream myfile;
    cout<<"Enter the name of the file:\n";
    getline (cin,FileName);
    FileName += ".txt";
}

void File_Write(string FileName)
{
    string TextInFile;
    ofstream myfile;
    myfile.open (FileName.c_str());
    cout<<"Enter your sentence here:\n";
    getline (cin,TextInFile);
    myfile<<TextInFile;
    myfile.close();
}

void File_Read(string FileName)
{
    ifstream ReadFile (FileName.c_str());
    string content;
    if (ReadFile.is_open())
    {

        while(ReadFile >> content)
        {
            cout << content <<' ';
        }
        ReadFile.close();
    }
    else
    {
        cout << "Error opening file!";
    }
}
