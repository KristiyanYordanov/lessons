#include <iostream>
using namespace std;

class Luxury
{
public:
    virtual void lux() const
    {
        cout << "Luxury\n";
    }
};

class Vehicle
{
public:
    virtual void drift() const
    {
        cout << "drifting";
    }
    virtual void beep() const
    {
        cout << "beep Vehicle";
    }
};

class Bmw : public Vehicle, public Luxury
{
public:
    void beep() const
    {
        cout << "beep BMW";
    }
};

int main()
{
    Bmw bmw1;
    bmw1.beep();
    bmw1.drift();
    bmw1.lux();

    Vehicle* bBMW = new Bmw;
    bBMW->beep();
    return 0;
}
