#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    string s;

    while (cin >> s)
    {
        if (s == "end")
          break;
        l.push_back(s);
    }

    int q;
    cin >> q;
    cin.ignore();

    auto it = l.begin();

    while (q--)
    {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string cmd;
        ss >> cmd;

        if (cmd == "next")
        {
            auto tmp = it;
            tmp++;
            if (tmp != l.end())
            {
                it = tmp;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (it != l.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "visit")
        {
            string ad;
            ss >> ad;

            bool flag = false;
            for (auto i = l.begin(); i != l.end(); i++)
            {
                if (*i == ad)
                {
                    it = i;
                    cout << *it << endl;
                    flag = true;
                    break;
                }
            }

            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
