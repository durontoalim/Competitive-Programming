#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    while (t--)
    {
        string str; cin>>str;

        int cnt = 1;
        int result = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'O'){
                result += cnt;
                cnt++;
            }
            else{
                cnt = 1;
            }
        }
        cout<<result<<endl;
        
    }
    

    return 0;
}