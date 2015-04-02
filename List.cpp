#include <iostream>
#include <stddef.h>

using namespace std;
// Клас за обектите, които ще се добавят към списъка
class CAT
{
public:
    CAT()
    {
        itsAge = 1;   //Конструктор
    }
    CAT(int age):itsAge(age) {}   //Конструктор
    ~CAT() {}; 		          //Деструктор
    int GetAge() const
    {
        return itsAge;    //Член-функция за достъп
    }
private:
    int itsAge; //Член-променлива
};

// Клас за управление на списъка, подрежда котките по възраст
class Node
{
public:
    Node (CAT*); //Конструктор с параметър указател към обект от клас CAT
    ~Node();         //Деструктор
    void SetNext(Node * node)
    {
        itsNext = node;    //Член-функции
    }
    Node * GetNext() const
    {
        return itsNext;
    }
    CAT * GetCat() const
    {
        return itsCat;
    }
    void Insert(Node *);
    void Display();
    int Sum();

private:
    CAT *itsCat;
    Node * itsNext;
};

//Дефиниция на конструктор
Node::Node(CAT* pCat):
    itsCat(pCat),
    itsNext(0)
{}
//Дефиниция на деструктор
Node::~Node()
{
    cout << "Deleting node...\n";
    delete itsCat;
    itsCat = 0;
    delete itsNext;
    itsNext = 0;
}

//Член-функция за подреждане на котките по възраст
void Node::Insert(Node* newNode)
{
    if (!itsNext)
        itsNext = newNode;
    else
    {
        int NextCatsAge = itsNext->GetCat()->GetAge(); // NextCatsAge възрастта на следващата котка
        int NewAge =  newNode->GetCat()->GetAge(); // Присвоява на променливата NewAge възрастта на котката от новия възел
        int ThisNodeAge = itsCat->GetAge(); // Присвоява на променливата ThisNodeAge възрастта на котката от текущия възел
//Следва проверка дали възрастта на котката от новия възел е по-голяма или равна на възрастта на котката от текущия възел и същевременно по-малка от възрастта на следващата котка.
        if (  NewAge >= ThisNodeAge && NewAge < NextCatsAge  )
        {
// Ако да указателят от новия възел се насочва към следващия възел, а указателят от текущия към следващия възел се насочва към новия възел
            newNode->SetNext(itsNext);
            itsNext = newNode;
        }
        else
            itsNext-> Insert (newNode);//Ако не функцията Insert() се прилага върху следвашия възел (т.е той става текущ)
    }
}
//Член функция за извеждане на подредените по възраст котки
void Node::Display()
{
    if (itsCat->GetAge() > 0)
    {
       cout << itsCat->GetAge() << " years old\n";
    }
    if (itsNext) {
        itsNext->Display();
    }
}

int Node::Sum()
{
    int n = itsCat->GetAge();
    cout<<"n"<<n<<endl;
    if (itsNext)
    {
        return n+itsNext->Sum();
    }
    else
    {
        return n;
    }
}



//Главна функция
int main()
{
    cout<<fin(6)<<endl;
    int b = 0;
    if (!b) {
        cout<<"fgfg"<<endl;
    }
    if (b == 0) {
        cout<<"BB"<<endl;
    }

    Node *pNode = 0;
    CAT * pCat = new CAT(0);
    int age;
    Node *pHead = new Node(pCat);
    while (1)
    {
        cout << "New Cat's age? (0 to quit): ";
        cin >>  age;
        if (!age) {
            break;
        }
        pCat = new CAT(age);
        pNode = new Node(pCat);
        pHead->Insert(pNode);
    }
    //int age = pHead->GetCat().GetAge();
    //cout<<age;
    pHead->Display();
    cout<<pHead->Sum();
    delete pHead;
    cout << "Exiting...\n\n";
    return 0;
}

