#include<iostream>
#include<string>
using namespace std;

class Client
{
private:
    int number; //id Primary key
    string family;
    double revenue;
    double income;
    double credit;

public:
    Client(int num, string fam, double rev, double inc, double cred); //consructor
    Client(); //default consructot

    void setNumber(int number);
    int getNumber();

    void setFamily(string family);
    string getFamily();

    void setRevenue(double revenue);
    double getRevenue();

    void setIncome(double income);
    double getIncome();

    void setCredit(double credit);
    double getCredit();

    double calculateBalance();
};
Client::Client() {
}
Client::Client(int num, string fam, double rev, double inc, double cred){
    number = num;
    family = fam;
    revenue = rev;
    income = inc;
    credit = cred;
}

double Client::calculateBalance()
{
    return revenue + income - credit;
}

int Client::getNumber()
{
    return number;
}
void Client::setNumber(int num)
{
    number = num;
}
string Client::getFamily()
{
    return family;
}
void Client::setFamily(string fam)
{
    family = fam;
}
double Client::getRevenue()
{
    return revenue;
}
void Client::setRevenue(double rev)
{
    revenue = rev;
}
double Client::getIncome()
{
    return income;
}
void Client::setIncome(double inc)
{
    income = inc;
}
double Client::getCredit()
{
    return credit;
}
void Client::setCredit(double cred)
{
    credit = cred;
}

int main()
{
    //Client* client = new Client[5];

    Client ivan;
    ivan.setFamily("Ivanov");
    cout<<ivan.getFamily()<<endl;

    Client petar;
    petar.setFamily("Petrov");
    cout<<petar.getFamily()<<endl;


   // cout<<client.getFamily();
    int egn;
    cout<<"Vyvedete egn:";
    cin>>egn;

    double balance  = ivan.calculateBalance();
    cout<<"The clients balance is: " << balance;
    return 0;
}

