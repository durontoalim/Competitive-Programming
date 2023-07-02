#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    string str; cin>>str;
    int up =0, low= 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i])){
            up++;
        }
        else low++;
    }

    if(up > low){
        for (int i = 0; i < str.length(); i++)
        {
            char ch = toupper(str[i]);
            cout<<ch;
        }
        cout<<endl;
    }
    else{
        for (int i = 0; i < str.length(); i++)
        {
            char ch = tolower(str[i]);
            cout<<ch;
        }
        cout<<endl;
    }
    

    return 0;
}