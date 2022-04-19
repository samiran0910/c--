#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int stars = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }
        while (stars != 2 * i - 1)
        {
            cout << "* ";
            stars++;
        }
        stars = 0;
        cout << endl;
    }
    return 0;
}