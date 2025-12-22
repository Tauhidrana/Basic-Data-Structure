#include <bits/stdc++.h>
using namespace std;
void fun(int* p)
{
  
    p = NULL;
    
}
int main()
{

    int x = 10;
    int *p = &x;
    fun(p);
 
    cout << *p << endl;
    return 0;
}