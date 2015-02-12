#include<iostream>
using namespace std;

class Templates
{
public:
    string name;
    string id;
    virtual void setId(string iD)
    {
        id = iD;
    }
    virtual string getId()
    {
        return id;
    }
};

class Trudov:public Templates
{
public:
    string id;
};

class Dostavki:public Templates
{
public:
    string id;
    Dostavki(string iD)
    {
        id = iD;
    }
    virtual void setId(string iD)
    {
        id = iD;
    }

    virtual string getId()
    {
        return id;
    }
};
int main()
{
    Templates** templ = new Templates*[3];
    templ[0] = new Dostavki("1");
    templ[1] = new Trudov;
    cout<<"id = "<<templ[0]->getId()<<endl;

    for (int i = 0; i < 2; i++)
    {
        if (templ[i]->getId() == "1")
        {
            cout<<"id = "<<templ[i]->getId()<<endl;
        }
    }
    delete [] templ;
    return 0;
}
