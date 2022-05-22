/*Tapsi has taken her first dose of vaccine 'A' days ago. She may take the second dose not less than 'B' days and not more than 'C' days since from her first dose of vaccination . Determine if Tapsi is too early, too late, or in the correct range for taking her second dose.

Input Format
-A single line of input, three integers A,B,C Separated by spaces.

Output Format
print a single line containing one string

"It is too Early" (without quotes) if it's too early to take the vaccine,
-"It is too Late" (without quotes) if it's too late to take the vaccine,

-"It is the right time to take second dose now" (without quotes) if it's the correct time to take the vaccine.

Sample Input 1
10 8 12
Sample Output 1
It is the right time to take second dose now.
Sample Input 2
14 2 10
Sample Output 2
It is too Late*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = a + 1; i <= c; i++)
    {
        if (i >= b)
        {
            cout << "It is the right time to take second dose now." << endl;
            break;
        }
    }
    if (a + 1 < b)
    {
        cout << "It is too Early." << endl;
    }
    if (c < a + 1)
    {
        cout << "It is too Late." << endl;
    }

    return 0;
}