#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
class Position
{
public:
    int x;
    int y;
};
class ProgramProperties
{
public:
    string name;
    Position pos;
    void print()
    {
        cout<<"name="<<name<<endl;
        cout<<"x="<<pos.x<<endl;
        cout<<"y="<<pos.y<<endl;
    }
};

int main()
{
    ifstream infile("C:/Users/kristiyan/Documents/GitHub/lessons/thefile.txt");
    string line;
    ProgramProperties p;
    //int c = 0; for while
    bool test = getline(infile, line);
    for (int c = 0; test; c++)
        // while(getline(infile, line))
    {
        cout<<"c = " << c << endl;
        if (c == 0)
        {
            p.name = line;
        }
        else if (c == 1)
        {
            p.pos.x = atoi(line.c_str());
        }
        else if (c == 2)
        {
            p.pos.y = atoi(line.c_str());
        }
        test = getline(infile, line);
         cout<<"test = " << test << endl;
        //c++; for while
    }
    p.print();
    return 0;
}




