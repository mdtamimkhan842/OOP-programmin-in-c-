#include <iostream>
using namespace std;
class member
{
public:
    int id;
    string name;
    member(int x, string y)
    {
        id = x;
        name = y;
    }
    display()
    {
        cout<<" id is : "<<id<<endl;
        cout <<" Name is : " <<name<<endl;
    }
};


int main ()
{
    int id;
    string name;
    cout<<"Enter your id : ";
    cin>>id;
    cout<<"Enter your name : ";
    cin>>name;
    member p(id, name);
    p.display();

    return 0;
}
