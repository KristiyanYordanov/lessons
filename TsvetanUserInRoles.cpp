#include <iostream>
using namespace std;

class UsersInRoles
{
    int UserId;
    int RoleId;
public:
    UsersInRoles(int iduser, int idrole);
    UsersInRoles (int iduser);
    UsersInRoles();

    int getIdUser();
    void setIdUser(int iduser);
    int getIdRole();
    void setIdRole(int idrole);

    void print()
    {
        cout<<"UserId=" <<UserId<<endl;
        cout<<"RoleId=" <<RoleId<<endl;
    }

};

UsersInRoles::UsersInRoles(int iduser, int idrole)
{
    UserId = iduser;
    RoleId = idrole;
}

UsersInRoles::UsersInRoles(int iduser)
{
    UserId = iduser;
}

UsersInRoles::UsersInRoles()
{

}

int UsersInRoles::getIdUser()
{
    return UserId;
}

void UsersInRoles::setIdUser(int iduser)
{
    UserId = iduser;
}

int UsersInRoles::getIdRole()
{
    return RoleId;
}

void UsersInRoles::setIdRole(int idrole)
{
    RoleId = idrole;
}


int main()
{
    int userid;
    int roleid;
    UsersInRoles Array[5];
    int i;
    for(i=0; i<5; i++)
    {
        cout<<"Enter UserID:\n";
        cin>>userid;
        cout<<"Enter RoleId:\n";
        cin>>roleid;
        cout<<endl;
        UsersInRoles object(userid,roleid);
        Array[i] = object;
    }
    cout<<"Information for the users:\n";
    for(int i=0; i<5; i++)
    {
        Array[i].print();
        cout<<endl;
    }

    return 0;
}
