#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class UsersInRoles
{
    int userID;
    int roleID;
public:
    UsersInRoles(){}

    UsersInRoles(int userid, int roleid)
    {
        userID = userid;
        roleID = roleid;
    }

    UsersInRoles(int userid)
    {
        userID=userid;
    }

    void setUserId(int userID);

    int getUserId()
    {
        return userID;
    }

    void setRoleID(int roleId){
        roleID = roleId;
    }
    int getRoleId()
    {
        return roleID;
    }
    void printInfo()
    {
        cout<<"UserID= " <<userID << "RoleID= " << roleID<<endl;
    }
};
int main()
{
    UsersInRoles role(1,1);
    role.getUserId();

    int userID;
    int roleID;
    UsersInRoles roles[2];
    for(int i=0; i<2; i++)
    {
        cout<<"Vuvedete UserID \n";
        cin>>userID;
        cout<<"Vuvedete RoleID \n";
        cin>>roleID;
        UsersInRoles temp(userID,roleID);
        roles[i]=temp;
        cout<<"---------------\n"<<endl;

    }
    role.getUserId();
    for(int i=0; i<2; i++)
    {
        cout<<"Information for the first user!\n";
        cout<<"ID: "<<roles[i].getUserId()<<endl;
        cout<<"Role ID: "<<roles[i].getRoleId()<<endl;

        roles[i].printInfo();


        cout<<"--------------------------"<<endl;
    }

    role.getRoleId();
    role.setRoleID(54,56);
    return 0;
}
