#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    string input;
    cin >> input;
    while(n!=0)
    {
        if(input.length() > 10) 
        {
            cout <<input[0]<<input.length()-2 << input[input.length()-1]<< endl;
        }
        else
        {
            cout << input << endl;
        }

        cin >> input;
        n--;
    }
}