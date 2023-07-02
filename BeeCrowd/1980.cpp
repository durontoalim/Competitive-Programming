#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string str;
    int mul;
    while (cin>>str && str != "0")
    {
        mul = 1;
        for (int i = 0; i < str.length(); i++)
        {
            mul *=  (int)str[i] - 96;
        }
        cout<<mul<<endl;
    }

    return 0;
}