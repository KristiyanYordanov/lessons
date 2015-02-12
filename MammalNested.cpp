#include<iostream>
using namespace std;

 enum COLOR { Red, Green, Blue, Yellow, White, Black, Brown } ;

class Mammal

{

public:

    Mammal():itsAge(1)
    {
        cout << "Mammal constructor...\n";
    }

    ~Mammal()
    {
        cout << "Mammal destructor...\n\n";
    }

    void Move() const
    {
        cout << "Mammal move one step\n";
    }

    //Член-функцията Speak() е виртуален метод.

    virtual void Speak() const
    {
        cout << "Mammal speak!\n";
    }

protected:

    int itsAge;

};

class Dog : public Mammal

{

public:

    Dog()
    {
        cout << "Dog Constructor...\n";
    }

    ~Dog()
    {
        cout << "Dog destructor...\n\n";
    }

    void WagTail()
    {
        cout << "Wagging Tail...\n";
    }

    //Следващите член-функции отменят  съответните член-функции от базовия клас Mammal.Обаче Speak() е виртуален метод в клас Mammal .

    void Speak()const
    {
        cout << "Wow!Wow!\n";
    }

    void Move()const
    {
        cout << "Dog moves 5 steps...\n";
    }

};
int main()
{

    cout<<"="<<Black<<endl;
//оператор new създава обект от клас Dog във “free store” и връща указател към този обект,който се записва  в указател pSharo деклариран от клас Mammal. Този обект може да извика член-функция от клас Dog само ако тя е декларирана като виртуален метод в клас Mammal.

    Mammal *pSharo = new Dog;

    pSharo->Move();

    pSharo->Speak();

    //pSharo->WagTail();

    delete pSharo;

//оператор new създава обект от клас Dog във “free store” и връща указател към този обект,който се записва  в указател pMecho деклариран от клас Dog. Този обект може да извика всяка член-функция от клас Dog , независимо от това дали тя отменя член-функция от клас Mammal

    Dog *pMecho = new Dog;

    pMecho->Move();

    pMecho->Speak();

    pMecho->WagTail();

    delete pMecho;

    return 0;
}
