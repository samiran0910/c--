#include <iostream>
using namespace std;

int main()
{
    int inp;
    cout << "Enter the number of elements you want: " << flush;
    cin >> inp;
    int array[inp];
    for (int i = 0; i < inp; i++)
    {
        cin >> array[i];
    } // input

    cout << "even elements: " << flush;
    for (int i = 0; i < inp; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << "\t";
        }
    }
    cout << endl;
    cout << "odd elements: " << flush;
    for (int i = 0; i < inp; i++)
    {
        if (array[i] % 2 == 1)
        {

            cout << array[i] << "\t";
        }
    }
    int sum = 0;
    for (int i = 0; i < inp; i++)
    {
        sum += array[i];
    }
    cout << endl;
    cout << "sum: " << flush << sum << endl;

    cout << "avg: " << flush << ((float)sum / inp) << endl;

    return 0;
}