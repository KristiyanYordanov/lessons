#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    cout<<"|---------------------------------------------------------------------|"<<endl;
    cout<<"|--------------------------Hallo--------------------------------------|"<<endl;
    cout<<"|----------------------------my---------------------------------------|"<<endl;
    cout<<"|-------------------------calculator----------------------------------|"<<endl;

    string str;
    int x = 0;
    cout<<"Enter: ";
    getline(cin, str);//пълним string str
    //1+1  int y = 1 int z = 1  opeatora = +
    //2-1
    cout<<endl<<"str= " <<str;

    char strChar[3];
    strcpy(strChar, str.c_str());//пълним масив от символи за да разделим str
    cout<<endl<<"strChar1= " <<strChar[0];
    cout<<endl<<"strChar2= " <<strChar[1];
    cout<<endl<<"strChar3= " <<strChar[2];
    //int a1[3] = {1,2,3}; //a[0] = 1; a[1] = 2; a[2] = 3;


    int y= atoi(&strChar[0]);
    int z = atoi(&strChar[2]);


    cout<<endl<<"y= " <<y;
    cout<<endl<<"z= " <<z;
    cout<<endl<<"operator = " <<strChar[1];

    // string opertorCal = atoi(&strChar[1]);


    cout<<endl<<"str.find(+)= "<<str.find("+");
//cout<<endl<<"str.find(-)= "<<str.find("-");
    cout<<endl<<"std::string::npos = " <<std::string::npos;

const char * destPtr = (const char *)strChar[1];

    switch (string(destPtr))
    {
    case "Option 1":
        x=y-z;
        cout<<endl<<"x2= " <<x;
        break;
    case "Option 2":
        x = y+z;
        cout<<endl<<"x1= " <<x;
        break;
    case "Option 3":

        x=y*z;
        cout<<endl<<"x3= " <<x;
        break;
    case "Option 3":

        x=y*z;
        cout<<endl<<"x3= " <<x;
        break;
    default:
        cout<<"She put no choice"<<endl;
        break;
    }



    cout<<endl<<"x= " <<x;
    return 0;
}

void test()
{
    int x,y;
    cout<<"Enter x=";
    cin >> x ;
    cout<<endl<<"Enter y=";
    cin >> y;
    cout<<endl<<"z=" << x+y;
}
