#include<iostream>

using namespace std;

class TestDesc
{

public:
    int * ptr;
    TestDesc()
    {
        int val=7;
        ptr = &val;
        *ptr = 8;
    }
    ~TestDesc()
    {
        delete ptr;
        ptr = NULL;
    }

};
int main()
{

    int *ptr;
    int x = 6;
    ptr = &x;

    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<&ptr<<endl;

    int *ptrNew = new int;
    int y = 7;
    ptrNew = &y;
    cout<<ptrNew<<endl;
    cout<<&ptrNew<<endl;

    delete ptrNew;

    ptrNew = NULL;
    delete ptrNew;

    int *some_integers = new int[20000];

    delete [] some_integers;


    TestDesc* t = new TestDesc;
    cout<<"s of t="<<sizeof(t)<<endl;
    cout<<"-----------"<<endl;
    cout<<t<<endl;
    cout<<&t<<endl;
    cout<<t->ptr<<endl;
    cout<<&t->ptr<<endl;

    delete t;
    t = NULL;
    cout<<"s of delete t="<<sizeof(t)<<endl;

    int a[]  = {1,2,3,4,5};



for (int i =0 ; i < 5; i++) {

    cout<<a[i]<<endl;
}

    return 0;
}
