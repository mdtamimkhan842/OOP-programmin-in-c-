#include <iostream>
#include <algorithm>
using namespace std;
class member
{
    string n;
public:
    void display(string s)
    {
        string n = s;
        reverse(n.begin(), n.end());
        if (s==n)
        {
            cout<<"It's a palimdrom number "<<endl;
        }
        else
        {
            cout<<"It's not a palimdrom number "<<endl;
        }
    }
};

int main ()
{
    string s;
    cout<<"Enter your string : ";
    cin>>s;
    member p;
    p.display(s);



    return 0;
}
