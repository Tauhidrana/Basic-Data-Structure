#include <bits/stdc++.h>
using namespace std;
void rec(int i, int n)
{
    if (i > n)
    {
        return;
    }
     rec(i+1,n);
    cout<<i<<endl;
   
}
int main()
{

    int n = 5;
    rec(1, 5);
    return 0;
}