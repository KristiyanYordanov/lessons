#include <iostream>
using namespace std;
class User
{
    int userID;
    string modificationtime;
    string email;
    string enabled;
    string username;
    string password;
public:
    User()
    {

    }
    User(int userid)
    {
        userID = userid;
    }
    User(int userid, string modTime,string eMail,string enab,string userName,string pass)
    {
       userID = userid;
       modificationtime = modTime;
       email = eMail;
       enabled = enab;
       username = userName;
       password = pass;
    }
    void setUserID (int userid)
    {
        userID = userid;
    }
    int getUserID ()
    {
        return userID;
    }
    void setModTime(string modTime)
    {
        modificationtime = modTime;
    }
    string getModTime()
    {
        return modificationtime;
    }
    void setEmail(string eMail)
    {
        email = eMail;
    }
    string getEmail()
    {
        return email;
    }
    void setEnabled(string enab)
    {
        enabled = enab;
    }
    string getEnabled()
    {
        return enabled;
    }
    void setUserName(string userName)
    {
        username = userName;
    }
    string getUsername()
    {
        return username;
    }
    void setPassword(string pass)
    {
        password = pass;
    }
    string getPassword()
    {
        return password;
    }
    void printInfo()
    {
        cout<<"UserID: "<<getUserID()<<endl;
        cout<<"Modification Time: "<<getModTime()<<endl;
        cout<<"Email: "<<getEmail()<<endl;
        cout<<"Enabled: "<<getEnabled()<<endl;
         cout<<"Username: "<<getUsername()<<endl;
         cout<<"Password: "<<getPassword()<<endl;

    }
};
int main()
{
    int userid; string modTime;string eMail;string enab;string userName;string pass;
    cin>>userid>>modTime;
    User two1(userid, modTime, eMail, enab, userName, pass);

    cout<<two1.getUserID()<<endl;
    cout<<two1.getModTime()<<endl;
    cout<<"---"<<endl;
    two1.setUserID(8);
    two1.setModTime("fghfhfghg");
    cout<<two1.getUserID()<<endl;
    cout<<two1.getModTime()<<endl;




   // cout<<two.getUserID();
   // two.setUserID(3);
   // cout<<two.getUserID();
    User one;
    one.setEmail("");
    return 0;
}
