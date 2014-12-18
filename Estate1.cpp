#include<iostream>
using namespace std;

class Estate
{
    int number;
    string address;
    string estateType;
    int estateArea;
    double estatePrice;

public:
    Estate(int num, string addr, string type, int area, double price)
    {
        number = num;
        address = addr;
        estateType = type;
        estateArea =area;
        estatePrice= price;
    }
    Estate() {}

    void setNumber(int number);

    int getNumber()
    {
        return number;
    }

    void setAddress(string address);
    string getAddress()
    {
        return address;
    }

    void setEstateType(string estateType);
    string getEstateType()
    {
        return estateType;
    }

    void setEstateArea(int estateArea);
    int getEstateArea()
    {
        return estateArea;
    }

    void setEstatePrice(double estatePrice);
    double getEstatePrice()
    {
        return estatePrice;
    }

    void toString() {
        cout<<"Address=" <<address << " number=" << number;
    }


};
int main()
{
    int number;
    string address;
    string estateType;
    int estateArea;
    double estatePrice;
    Estate estates[2];

    for(int i=0; i<2; i++)
    {
        cout<<"Vuvedete nomer \n";
        cin>>number;
        cout<<"Vuvedete adres \n";
        cin>>address;
        cout<<"Vuvedete vid \n";
        cin>>estateType;
        cout<<"Vuvedete area \n";
        cin>>estateArea;
        cout<<"Vuvedete cena za kv.m \n";
        cin>>estatePrice;
        Estate temp(number,address,estateType,estateArea,estatePrice);
        estates[i]=temp;

    }
    //  cout<<estates[0].getAddress()<<endl;
    // cout<<estates[1].getAddress()<<endl;
    // cout<<estates[2].getAddress();

    int type;
    cout<<"Vuvedete type za tyrsene=";
    cin>>type;



    bool found = false;
    for(int i=0; i<2; i++)
    {
        if (estates[i].getEstatePrice() == price )
        {
            found =  true;
            cout<<estates[i].toString()<<endl;
        }
    }

    if (found == false) {
        cout<<"Not found";
    }

    // cout<<"Vuvedete vid"< cin>>estateType;
    // cout<<"Vuvedete plosht"< cin>>estateArea;

    return 0;
}
