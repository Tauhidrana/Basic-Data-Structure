#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {
        1,
        2,
        3,
        2,
        5,
        2};
    // vector<int> v2 = {100, 200, 300};

    // replace(v.begin(),v.end()-1,2,100);
    auto it = find(v.begin(), v.end(), 5);

    //   if (it== v.end())
    //   {
    //     cout<<"Not found"<<endl;
    //   }
    //   else
    //   {
    //     cout<<"Found"<<endl;
    //   }
    cout << *it << endl;

    return 0;
}