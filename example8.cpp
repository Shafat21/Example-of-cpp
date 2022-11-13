#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i; i<=10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}