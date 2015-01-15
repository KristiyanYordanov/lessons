#include <iostream>
using namespace std;

class ACCOUNT
{
    int AccountID;
    int Value;
public:
    ACCOUNT() {};
    ACCOUNT(int idacc, int valueid)
    {
        AccountID = idacc;
        Value = valueid;
    }
    int getAccountID()
    {
        return AccountID;
    }
    void setAccountID(int idacc)
    {
        AccountID = idacc;
    }
    int getValue()
    {
        return Value;
    }
    void setValue(int val )
    {
        Value = val;
    }
    void Print()
    {
        cout<<"AccountID=" <<AccountID<<endl;
        cout<<"Value=" <<Value<<endl;
    }
    friend ACCOUNT operator+(ACCOUNT b1, ACCOUNT b2)
    {
        int b = b1.Value + b2.Value;
        return ACCOUNT(1, b);
    };
    friend int operator-(ACCOUNT b1, ACCOUNT b2)
    {
        int b = b1.Value - b2.Value;
        return b;
    };
    friend ACCOUNT operator/(ACCOUNT b1, ACCOUNT b2)
    {
        int b4 = b1.Value / b2.Value;
        return ACCOUNT(43, b4);
    };
    friend ACCOUNT operator*(ACCOUNT b1, ACCOUNT b2)
    {
          //  b4 = b1 * b2;
    };


};

int main()
{
    cout<<"I started!"<<endl;
    ACCOUNT a;
    ACCOUNT a11();


    ACCOUNT a1(1,2);
    a1.setAccountID(100);
    a1.setValue(23);



    ACCOUNT a2(2,3);
    cout<<(a1+a2).getValue()<<endl;
    cout<<(a1-a2)<<endl;

    cout<<a2.getAccountID();




    return 0;
}
