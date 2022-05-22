#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x1 = (a * 100) / 10;
        int x2 = (b * 100) / 20;
        if (x1 == x2)
            cout << "ANY\n";
        else if (x1 > x2)
            cout << "FIRST\n";
        else if (x1 < x2)
            cout << "SECOND\n";
    }
    return 0;
}