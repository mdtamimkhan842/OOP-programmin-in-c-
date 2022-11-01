#include <iostream>
using namespace std;
class member
{
private:
    double balance;
private:
    void display();
    void getdata();

};
 void member :: display(double y)
    {
        balance = y;
    }
    void member :: getdata()
    {
        cout<<balance<<endl;
    }

int main ()
{
    double x;
    cout<<"Enter the value : ";
    cin>>x;
    member p;
    p.display(x);
    p.getdata();


    return 0;
}
