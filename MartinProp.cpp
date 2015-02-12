#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
class Position
{
public:
    int x;
    int y;
    Position() {};
};

class ProgramProperties
{
    string name;
    int classPosition;
    int sizeA;
    Position pos;
public:
    ProgramProperties() {};
    ProgramProperties(string names,  Position p , int sizes)
    {
        name=names;
        classPosition= position;
        sizeA = sizes;
        pos = p;
    }
    void print()
    {
        cout<<pos.x<<endl;
        cout<<pos.y<<endl;
    }
};


int main()
{
    ifstream inFile;
    inFile.open("numbers.txt");

    if (inFile.fail())  // Proverka
    {
        cerr<<"Error: Unable to open file"<<endl;
        exit(1);
    }
    string line;
    if (inFile.is_open())
    {
        while (getline (inFile,line))
        {
            cout<< line << '\n';
        }
        inFile.close();
        return 0;
    }
    Position pos;
    pos.x =6;
    pos.y= 5;r
    ProgramProperties pp("poram", pos, 2);
    pp.print();
}
