#include <iostream>
using namespace std;
#define SIZE 3 //constant

class BTK
{
public:
    int id;
    int desk;
};

class QueueClass
{
    BTK queue[SIZE];// Съдържа опашкат
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
    if(tail==SIZE) tail = 0; // циклично завъртане
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
    if(head==SIZE) head = 0; // циклично завъртане
    return queue[head];
}

int main() //Тест-функция

{
    QueueClass queue1;
    BTK btk;
    for(int i=1; i <=SIZE-1; i++)
    {
        cout<<"id =";
        cin>>btk.id;
        cout <<endl;

        cout<<"desk =";
        cin>>btk.desk;
        cout <<endl;

        queue1.put(btk);
        cout << "Equeue index: "<<i<<" data: "<< btk.id << endl;
        cout << "Equeue index: "<<i<<" data: "<< btk.desk<< endl;
    }
    cout <<endl;
    for(int i=1; i <= SIZE-1; i++)
    {
        BTK btk = queue1.pop();
        cout << "Dequeue index: "<<i<<" data: "<< btk.id << endl;
        cout << "Dequeue index: "<<i<<" data: "<< btk.desk << endl;
    }
    return 0;
}
