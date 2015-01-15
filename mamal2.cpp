#include <iostream>
using namespace std;
enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal

{

public:

    Mammal();

    Mammal(int age);

    ~Mammal();

    int GetAge() const
    {
        return itsAge;
    }

    void SetAge(int age)
    {
        itsAge = age;
    }

    int GetWeight() const
    {
        return itsWeight;
    }

    void SetWeight(int weight)
    {
        itsWeight = weight;
    }

    void Speak() const
    {
        cout << "Mammal sound!\n";
    }

    void Sleep() const
    {
        cout << "shhh. I'm sleeping.\n";
    }

protected:

    int itsAge;

    int itsWeight;

};

class Dog : public Mammal

{

public:

    Dog();

    Dog(int age);

    Dog(int age, int weight);

    Dog(int age, BREED breed);

    Dog(int age, int weight, BREED breed);

    ~Dog();

    BREED GetBreed() const
    {
        return itsBreed;
    }

    void SetBreed(BREED breed)
    {
        itsBreed = breed;
    }

    void WagTail()
    {
        cout << "Tail wagging...\n";
    }

    void BegForFood()
    {
        cout << "Begging for food...\n";
    }

private:

    BREED itsBreed;

};

//Конструктор Mammal без параметри с подразбиращи се стойности

Mammal::Mammal():

    itsAge(1),

    itsWeight(5)

{

    cout << "Mammal constructor...\n";

}

//Конструктор Mammal с 1 параметър

Mammal::Mammal(int age):

    itsAge(age),

    itsWeight(5)

{

    cout << "Mammal(int) constructor...\n";

}

//Деструктор Mammal без параметри

Mammal::~Mammal()

{

    cout << "Mammal destructor...\n";

}



//Конструктор Dog без параметри  с подразбираща се стойност

Dog::Dog():

    Mammal(),

    itsBreed(YORKIE)

{

    cout << "Dog constructor...\n";

}

//Конструктор Dog с 1 параметър  и подразбираща се стойност

Dog::Dog(int age):

    Mammal(age),

    itsBreed(YORKIE)

{

    cout << "Dog(int) constructor...\n";

}

//Конструктор Dog с 2 параметъра  и подразбираща се стойност

Dog::Dog(int age, int weight):

    Mammal(age),

    itsBreed(YORKIE)

{

    itsWeight = weight;

    cout << "Dog(int, int) constructor...\n";

}

//Конструктор Dog с 3 параметъра

Dog::Dog(int age, int weight, BREED breed):

    Mammal(age),

    itsBreed(breed)

{

    itsWeight = weight;

    cout << "Dog(int, int, BREED) constructor...\n";

}

//Конструктор Dog с 2 параметъра

Dog::Dog(int age, BREED breed):

    Mammal(age),

    itsBreed(breed)

{

    cout << "Dog(int, BREED) constructor...\n";

}

//Деструктор Dog без параметри

Dog::~Dog()

{

    cout << "Dog destructor...\n";

}

int main()

{

    Dog fido;

    Dog rover(5);

    Dog buster(6,8);

    Dog yorkie (3,YORKIE);

    Dog dobbie (4,20,DOBERMAN);

    fido.Speak();

    rover.WagTail();

    cout << "Yorkie is " << yorkie.GetAge() << " years old\n";

    cout << "Dobbie weighs ";

    cout << dobbie.GetWeight() << " pounds\n";

    return 0;

}

