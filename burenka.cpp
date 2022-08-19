#include <iostream>
using namespace std;

int main() 
{
    long long t;
    cin >> t;
    while(t != 0)
    {
        long long a, b, c, d;
        cin >> a >>b >> c >> d;
        long long temp1 = a*d;
        long long temp2 = b*c;
        if (temp1 == temp2) {
            cout << "0" << endl;
        }
        else if (temp1 == 0 || temp2 == 0)
        {
            cout << "1" << endl;
        }
        else if (temp1%temp2 == 0 || temp2%temp1 == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
        t--;
    }


}