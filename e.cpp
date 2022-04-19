#include<iostream>
using namespace std;
#define SWAP(a,b)  a^=b ^=a ^=b
int main()
{
    int a, b;
    cin >> a >> b;
    SWAP(a,b);
    cout << a << " " << b;
    return 0;
}