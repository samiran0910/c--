#include <iostream>
using namespace std;

int main()
{
    int mul[10][10];
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            mul[i][j] = i * j;
            cout << mul[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}