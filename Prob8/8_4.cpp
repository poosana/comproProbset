#include <iostream>
using namespace std;

void printPattern1(int N, int M)
{
    if (N <= 0 || M <= 0)
    {
        cout << "Invalid input";
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << 'O';
                }
                else
                {
                    cout << 'X';
                }
            }
            else if (i % 2 != 0)
            {
                if (j % 2 == 0)
                {
                    cout << 'X';
                }
                else
                {
                    cout << 'O';
                }
            }
        }
        cout << endl;
    }
    cout<<endl;
}

int main()
{
    printPattern1(2, 2);
    printPattern1(3,5);
    printPattern1(5,3);
    printPattern1(0,3);
    printPattern1(7,-1);

}