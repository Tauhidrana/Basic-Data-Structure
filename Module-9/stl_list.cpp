#include <bits/stdc++.h>
using namespace std;
int main()
{

     list<int> l = {1, 2, 3, 4, 5};
    vector<int>v{10,20,30};
     int a[] = {10,20,30,40,50};

    list<int> l2(v.begin(),v.end());

     l2.clear();
    l2.resize(5,100);
    
    for (int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}