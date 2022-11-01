#include <iostream>
using namespace std;
class member
{
public:
    int id;
    string name;
    member()
    {
        id = 12345;
        name = "Bangladesh";
    }
    void dispaly()
    {

        cout<<"Id is : "<<id <<endl;
        cout<<"Name is : "<<name<<endl;
    }
};

int main ()
{

    member p;
    p.dispaly();

    return 0;
}
