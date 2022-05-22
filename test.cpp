#include<iostream>
using namespace std;

int main()
{
   int t;
   cin >> t;
   
   while(t--){
      int rev = 0;
      int a;
      cin >> a;
      while(a>0){
      rev = ((rev * 10) + (a % 10));
      a /= 10;
      }
      cout << rev<<endl;
   }
   return 0;
}