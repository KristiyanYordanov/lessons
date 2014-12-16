#include<iostream>
#include<string>
using namespace std;

class Client
{
public:
    int number;

    void setNumber(int number);
    int getNumber();
    Client(); //constructor

};

Client::Client(){
}

void Client::setNumber(int num){
    number = num;
}

int Client::getNumber() {
    return number;
}


int main() {
    Client client;
    client.number = 1;
    cout<<"Client id is=" << client.number<<endl;

    client.setNumber(2);
    cout<<"Client id is=" << client.getNumber()<<endl;

    Client* client2 = new Client();
    cout<< client2<<endl;
    cout<< &client2<<endl;;

    return 0;
}
