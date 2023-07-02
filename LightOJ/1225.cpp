#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    int cnt = 1;
    while (t--)
    {
        cout<<"Case "<<cnt<<": ";
        string str; cin>>str;

        int len = str.length();
        int cpy_len = len;

        bool bol = false;

        for(int i=0; i < len/2; i++){
            if(str[i] != str[cpy_len-1]){
                bol = true;
                break;
            }
            cpy_len--;
        }
        if(bol){
            cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;

        cnt++;
    }
    

    return 0;
}