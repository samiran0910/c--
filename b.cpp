#include<iostream>
#include <cstring>
using namespace std;

int pal(char str[20]){
    int first = 0;
    int last = strlen(str) - 1;
    // cout << last;
    int flag = 0;
    while (last != 0)
    {
        if (str[first++] != str[last--])
        {
            flag = 1;
        }
    }
    if (flag == 0)
    
        cout << "yes " << str << " is a palindrome";
    
    else
        cout << "no " << str << " is not a palindrome";
    return flag;
}


int main()
{
    char str[20];
    cout << "Enter your string: " << flush;
    cin>>str;
    // cout<<str;
    pal(str);

    return 0;
}