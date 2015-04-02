#include <iostream>
using namespace std;
#define SIZE 2 //constant

class BTK
{
public:
    string name;
    string surname;
    string family;
    string egn;
    string adress;
};

class QueueClass
{
    BTK queue[SIZE];// Съдържа опашката
    int head, tail;
public:
    QueueClass();              // Конструктор
    void put(BTK num);           // Съхранява
    BTK pop();                 // Извежда
};

QueueClass::QueueClass()
{
    head = tail = 0;
}
void QueueClass::put(BTK btk) //Член-функция за въвеждане на стойности в опашката
{
    if(tail+1==head || (tail+1==SIZE && !head))
    {
        cout << "Queue is full\n";
        return;
    }

    tail++;
    if(tail==SIZE) {
        tail = 0; // циклично завъртане
    }
    queue[tail] = btk;
}

BTK QueueClass::pop()//Член-функция за извеждане на стойности от опашката
{
    if(head == tail)
    {
        cout << "Queue is empty\n";
        // или друг индикатор за грешка
    }
    head++;
    if(head==SIZE) {
        head = 0; // циклично завъртане
    }
    return queue[head];
}

int main() //Тест-функция

{
    QueueClass queue1;
    BTK object;
    for(int i=0; i <=SIZE; i++)
    {
        cout<<"Enter the name of the client: ";
        cin>>object.name;

        cout<<"Enter the surname of the client: ";
        cin>>object.surname;

        cout<<"Enter the family of the client: ";
        cin>>object.family;

        cout<<"Enter the EGN of the client: ";
        cin>>object.egn;

        cout<<"Enter the adress of the client: ";
        cin>>object.adress;

        queue1.put(object);
        cout<<endl;
        cout << "Equeue index: "<<i<<" Data: "<< object.name << endl;
        cout << "Equeue index: "<<i<<" Data: "<< object.surname<< endl;
        cout << "Equeue index: "<<i<<" Data: "<< object.family<< endl;
        cout << "Equeue index: "<<i<<" Data: "<< object.egn<< endl;
        cout << "Equeue index: "<<i<<" Data: "<< object.adress<< endl;
        cout<<"-------------------------"<<endl<<endl;
    }
    cout <<endl;
    cout<<"Clients of BTK are:"<<endl<<"===================="<<endl<<endl;
    for(int i=0; i <= SIZE; i++)
    {
        BTK object = queue1.pop();
        cout << "Dequeue index: "<<i<<" Data: "<< object.name << endl;
        cout << "Dequeue index: "<<i<<" Data: "<< object.surname << endl;
        cout << "Dequeue index: "<<i<<" Data: "<< object.family << endl;
        cout << "Dequeue index: "<<i<<" Data: "<< object.egn << endl;
        cout << "Dequeue index: "<<i<<" Data: "<< object.adress << endl;
        cout<<"-------------------------"<<endl<<endl;
    }
    return 0;
}
