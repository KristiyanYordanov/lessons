#include <iostream>
#include <string>
using namespace std;

// Class Estate !!
class Estate
{
public:
    int number;
    string address;
    string estateType;
    int estateArea;
    double estatePrice;

    Estate(int num, string addr);
    Estate(int num, string addr, string type, int area, double price);
    Estate();

    void setNumber(int number);
    int getNumber();

    void setAddress(string address);
    string getAddress();

    void setEstateType(string estateType);
    string getEstateType();

    void setEstateArea(int estateArea);
    int getEstateArea();

    void setEstatePrice(double estatePrice);
    double getEstatePrice();
};
Estate::Estate()
{
}
Estate::Estate(int num, string addr)
{
    number = num;
    address=addr;
}
Estate::Estate(int num, string addr, string type, int area, double price)
{
    number = num;
    address=addr;
    estateType=type;
    estateArea=area;
    estatePrice=price;
}
int Estate::getNumber()
{
    return number;
}
void Estate::setNumber(int num)
{
    number = num;
}

void Estate::setAddress(string addr)
{
    address=addr;
}
string Estate::getAddress()
{
    return address;
}
string Estate::getEstateType()
{
    return estateType;
}
void Estate::setEstateType(string type)
{
    estateType=type;
}

void Estate::setEstateArea(int area)
{
    estateArea=area;
}
int Estate::getEstateArea()
{
    return estateArea;
}

void Estate::setEstatePrice(double price)
{
    estatePrice=price;
}
double Estate::getEstatePrice()
{
    return estatePrice;
}

int main()
{
    Estate estates [2];
    Estate estate;
    for(int i=0; i<2; i++)
    {
        cout<<"Estate number: ";
        cin>>estate.number;
        cout<<"Estate Address: ";
        cin>>estate.address;
        cout<<"Estate Type: ";
        cin>>estate.estateType;
        cout<<"Estate Area: ";
        cin>>estate.estateArea;
        cout<<"Estate Price: ";
        cin>>estate.estatePrice;
        cout<<"---\n";
        estates[i] = estate;
    }

    bool typeOrArea;
    string flat;
    int plosht;
    cout<<"Tursete po vid ili po plosht< 0 za vid - 1 za plosht>\n";
    cin>>typeOrArea;

    if(typeOrArea == false)
    {
        cout<<"Vuvedete vid na imota: ";
        cin>>flat;
        for(int i=0; i<2; i++)
        {
            if(estates[i].estateType == flat)
            {
                cout<<"Ima takuv imot;";
            }
        }
    }
    else
    {
        cout<<"Vuvedete ploshta na imota: ";
        cin>>plosht;
        for(i=0; i<2; i++)
        {
            if(plosht == estates[i].estateArea)
            {
                cout<<"Ima takuv imot;";
            }
        }
    }
    return 0;
}
