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
        int x;
        cin >> x;
        int d1 = x * 0.1;
        int d2 = 100;
        cout << max(d1, d2) << "\n";
    }
    return 0;
}