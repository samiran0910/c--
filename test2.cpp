#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (max <= array[i])
        {
            max = array[i];
        }
    }
    cout << "max: " << max << endl;
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (min >= array[i])
        {
            min = array[i];
        }
    }
    cout << "min: " << min;
    return 0;
}