#include <iostream>
using namespace std;

int main()
{
    int arr[10][10];
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            arr[i][j] = i * j;
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}