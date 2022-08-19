
#include <iostream>
using namespace std;

int main() 
{
    long long t;
    cin >> t;
    while(t != 0)
    {
        long long n;
        cin >> n;
        cout << n << endl;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }
        t--;
    }


}