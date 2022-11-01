#include <iostream>
using namespace std;
class abstraction
{
private:
    int a,b, sum;
public:
    void display(int x, int y)
    {
        a = x;
        b = y;
        sum = a+b;
    }
    void getdata()
    {
        cout<<"Summation is : " <<sum<<endl;
    }

};
int main ()
{
    int a,b;
    cout<<"Enter your value ";
    cin>>a>>b;
    abstraction p;
    p.display(a, b);
    p.getdata();

    return 0;
}
