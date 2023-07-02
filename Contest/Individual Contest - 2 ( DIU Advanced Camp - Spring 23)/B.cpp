#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    string str;
    while (cin>>str)
    {
        string str2,str3;
        int first = 0,second;
        list<char>lst;
        list<char>::iterator index;
        index = lst.begin();
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '['){
                index = lst.begin();
                continue;
            }

            if(str[i] == ']'){
                index = lst.end();
                continue;
            }

            index = lst.insert(index,str[i]);
            index++;
        }

        for(auto i: lst) cout<<i;
        cout<<endl;
        
    }
    

    return 0;
}