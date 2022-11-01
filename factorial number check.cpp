#include <iostream>
using namespace std;
class member
{

private:
    int n, i, a, fact;
public:


    void display(int m)
    {
        n = m;
        fact=1;
        for (i=n; i>=1; i--)
        {
            fact = fact*i;
        }

        cout<<"Factorial " << n << " is : " <<fact<<endl;
    }

};


int main ()
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    member p;
    p.display(n);


    return 0;
}


/*#include <iostream>
using namespace std;
class member
{

private:
    int n, i, a, fact;
public:
    member(int m)//construction
    {
        n = m;
        fact=1;
        for (i=n; i>=1; i--)
        {
            fact = fact*i;
        }
    }
    void display()
    {
        cout<<"Factorial " << n << " is : " <<fact<<endl;
    }

};


int main ()
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    member p(n);
    p.display();


    return 0;
}*/

