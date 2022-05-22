#include <bits/stdc++.h>
using namespace std;
class Temp
{
    float far, cel;

public:
    void getdata(void);
    void disp(void);
};
void Temp::getdata(void)
{
    cin >> far;
    cel = float((far - 32) * 5 / 9.0);
}
void Temp::disp(void)
{
    cout << cel;
}
int main()
{
    ios_base::sync_with_stdio(false);
    Temp t;
    t.getdata();
    t.disp();
}