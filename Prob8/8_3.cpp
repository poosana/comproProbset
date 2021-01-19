#include <iostream>
using namespace std;

int main()
{
    int N, min;
    cout << "Input number: ";
    cin >> N;
    if (N < 0)
    {
        cout << "Minimum = N/A";
    }
    else
    {
        while (N > 0)
        {
            cout << "Input number: ";
            cin >> N;
            if (N < min && N != 0)
            {
                min = N;
            }
        }
        cout << "Minimum = " << min;
    }
}