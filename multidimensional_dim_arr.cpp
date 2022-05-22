#include <iostream>
using namespace std;

int main()
{
    int mu[100][100];

    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            mu[i][j] = (i) * (j);
            cout << mu[i][j] << "\t";
        }
        cout << "\n";
    }
    
    

    return 0;
}