#include <iostream>
using namespace std;

class Student
{
    string Name;
    string Surname;
    string Family;
    string Course;
    string Specialty;
    string University;
    string Email;
    string PhoneNumber;

public:
    Student (string Name, string surname, string family, string course, string spec, string univer, string email, string pnumber)
    {
        this -> Name = Name;
        this -> Surname = surname;
        this -> Family = family;
        this -> Course = course;
        this -> Specialty = spec;
        this -> University = univer;
        this -> Email = email;
        this -> PhoneNumber = pnumber;
    }

    Student (string Name, string family, string course, string spec, string univer)
    {
        this -> Name = Name;
        this -> Family = family;
        this -> Course = course;
        this -> Specialty = spec;
        this -> University = univer;
    }
    string getName()
    {
        return Name;
    }
    void setName(string name = "ivan")
    {
        this -> Name = name;
    }
    string getSurname()
    {
        return Surname;
    }
    void setSurname(string surname)
    {
        Surname = surname;
    }

    string getFamily()
    {
        return Family;
    }

    void setFamily(string family)
    {
        Family = family;
    }

    string getCourse()
    {
        return Course;
    }
    void setCourse(string course)
    {
        Course = course;
    }

    string getSpecialty()
    {
        return Specialty;
    }
    void setSpecialty(string spec)
    {
        Specialty = spec;
    }


    string getUniversity()
    {
        return University;
    }
    void setUniversity(string univer)
    {
        University = univer;
    }

    string getEmail()
    {
        return Email;
    }
    void setEmail(string email)
    {
        Email = email;
    }

    string getPNumber()
    {
        return PhoneNumber;
    }
    void PNumber(string pnumber)
    {
        PhoneNumber = pnumber;
    }


};

int main()
{
    Student student("sgdfgdf", "1gdfgdfg", "2gfgdfgdf", "3gdfgdfgfd", "4fghfhgfh");
    student.setName();


    cout<<student.getName()<<endl;

    cout<<"1 = "<<student.getEmail()<<endl;
    student.setEmail("dfgdfgdfgdg");
    cout<<"2 = "<<student.getEmail()<<endl;

     student.setEmail("test2");
    cout<<"3 = "<<student.getEmail()<<endl;


    student.setEmail("");
    cout<<"4 = "<<student.getEmail()<<endl;

    return 0;
}
