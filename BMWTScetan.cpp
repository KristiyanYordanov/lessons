#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "Vehicle constructor... "<<endl;
    }
    virtual void Drift()
    {
        cout << "Drifting!"<<endl;
        cout <<"    ||    ||"<<endl;
        cout <<"   ||    ||"<<endl;
        cout <<"  ||    ||"<<endl;
        cout <<"   ||    ||"<<endl;
        cout <<"    ||    ||"<<endl;
        cout <<"   ||    ||"<<endl;
        cout <<"  ||    ||"<<endl;
    }
};

class Luxury
{
public:
    Luxury()
    {
        cout << "Luxury constructor... "<<endl;
    }
    virtual void Lux()
    {
        cout<<"This is luxury car!"<<endl;
    }
};

class Bmw:public Vehicle,public Luxury
{
public:
    Bmw()
    {
        cout << "Bmw constructor... "<<endl;
    }

    void Beep()
    {
        cout<<"---Beep, beep! Move over, I have 530HP! Wooom, Wooooooom!---"<<endl;
    }

};

int main()
{
    Vehicle*pCar = new Bmw;
    pCar->Drift();
    delete pCar;

    Bmw*pAuto = new Bmw;
    pAuto->Beep();
    delete pAuto;

    return 0;
}
