#include <iostream>
using namespace std;

int main()
{
    int n, space;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)

        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)

        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return (0);
}