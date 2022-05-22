#include<iostream>
using namespace std;

int main()
{
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(n%i==0){
            cout << i << "\t";
        }
    }*/

    int n;
    cin >> n;
    int fac = 1;
    for (int i = 1; i <= n;i++){
        
        fac *= i;
    }
    cout << fac;

    return 0;
}