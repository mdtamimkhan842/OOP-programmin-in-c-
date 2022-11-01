#include <iostream>
using namespace std;
class member
{
private:
    int a, b, sum;
    double c;
public:

    member ()
    {
        cout<<"This is first constructor : "<<endl;
    }
    member (int x, int y)
    {
        a= x;
        b = y;
        sum = a+b;
        cout<<"Summation is : "<<sum <<endl;
    }
    member (int x, double y)
    {
        a= x;
        c = y;
        cout<<"Int value is : "<<a<<endl<<"Double value is :" <<c<<endl;
    }

};
int main ()
{
    member p1;
    member p2(10,20);
    //member p3(40, 40.6)

    return 0;
}
