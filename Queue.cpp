#include <iostream>
#include <queue>
#include <string>
using namespace std;
class BTK
{
    public:
    string name;
    string surname;
    string family;
    string egn;
};
int main()
{
    BTK btk;
    queue<BTK> name;
    string n;
    cout << "Enter the name of the first user:\n";
    cin>>n;
    btk.name = "gfgf";
    cout << "Pushing one two three \n";
    name.push(btk);
    name.push(btk);
    name.push(btk);


    while(!name.empty())
    {   cout << "Popping ";
        cout << name.front()<<endl;
        name.pop();
    }
    return 0;
}
