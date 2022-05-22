#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c;
        cin >> a;
        b = a + 1;
        c = a | b;
        while (c != a + b)
        {
            b++;
            c = a | b;
        }
        cout << b << "\n";
    }
    return 0;
}