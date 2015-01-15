#include <iostream>
#include <string>
using namespace std;

class Parent {
    string name;

public:
    Parent(){}
    Parent(string Name) {
        name = Name;
    }

    string getName() {
        return name;
    }
    void setName(string Name) {
        name = Name;
    }

};

int main() {
    Parent p("dfdf");
    Parent p1;

    cout<<p.getName()<<endl;
    p.setName("Go6o"+"const");
    cout<<p.getName()<<endl;
    p.setName("Go6o1");
    cout<<p.getName()<<endl;
     p.setName("");
    cout<<p.getName()<<endl;

    bool type = 0;
    bool type1 = 1;
    bool type2 = true;
    bool type3 = false;
    return 0;
}

