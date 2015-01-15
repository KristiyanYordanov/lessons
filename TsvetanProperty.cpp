#include <iostream>
using namespace std;

class Property
{
public:
    int number;
    string address;
    string type;
    int area;
    double price;

    Property(int num, string adr, string type1, int area1, double price1); //consructor
    Property();//default constructor

    void setNumber(int number);
    int getNumber();

    void setAddress(string address);
    string getAddress();

    void setType (string type);
    string getType();

    void setArea(int area);
    int getArea();

    void setPrice(double price);
    double getPrice();
};

Property::Property()
{
}
Property::Property(int num, string adr, string type1, int area1, double price1)
{
    number = num;
    address = adr;
    type = type1;
    area = area1;
    price = price1;
}

int Property::getNumber()
{
    return number;
}

void Property::setNumber(int num)
{
    number = num;
}
string Property::getAddress()
{
    return address;
}
void Property::setAddress(string adr)
{
    address = adr;
}
string Property::getType()
{
    return type;
}
void Property::setType(string type1)
{
    type=type1;
}
int Property::getArea()
{
    return area;
}
void Property::setArea(int area1)
{
    area = area1;
}
double Property::getPrice()
{
    return price;
}
void Property::setPrice(double price1)
{
    price = price1;
}

int main()
{
    Property Array[5];
    int i;
    for (i=0; i<2; i++)
    {
        Property object;
        cout<<"Enter property number:\n";
        cin>>object.number;
        cout<<"Enter property address:\n";
        cin>>object.address;
        cout<<"Enter property type:\n";
        cin>>object.type;
        cout<<"Enter property area:\n";
        cin>>object.area;
        cout<<"Enter property price:\n";
        cin>>object.price;
        cout<<endl;
        Array[i]=object;
    }

    bool TypeOrArea;
    string ttype;
    int aarea;
    cout<<"Po kakuv kriterii jelaete da se tursi? (0 za vid, 1 za plosht)\n";
    cin>>TypeOrArea;

    bool found = false;;
    if (TypeOrArea == false)
    {
        cout<<"Vuvedete jelaniqt vid na imota:\n";
        cin>>ttype;
        for (i=0; i<2; i++)
        {
            if (Array[i].type == ttype)
            {
                found = true;
                cout<<"Nameren e takuv imot!"<<endl;
            }
        }

        if (!found) {
            cout<<"Ne e nameren takuv imot!"<<endl;
        }

    }
    else
    {
        cout<<"Vuvedete jelanata plosht na imota:\n";
        cin>>aarea;
        for (i=0; i<2; i++)
        {
            if (aarea == Array[i].area)
            {
                cout<<"Nameren e takuv imot!"<<endl;
            }
        }
    }
    return 0;
}
