#include<iostream>
using namespace std;

int prime(int n){
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
        cout << n << " is a prime"<<endl;
    else
        cout << n << " is not a prime"<<endl;
    for (int i = 2; i < 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (j == i - 1)
            {
                cout << i << "\n";
            }
        }
    }
    return flag;
}


int main()
{
    int n;
    cin >> n;

    prime(n);

    return 0;
}