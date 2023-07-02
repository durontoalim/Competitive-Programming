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
        int a,b; cin>>a>>b;
        if(a == 1 || b == 1){
            cout<<"YES"<<endl;
            continue;
        }
        if(a <= 2 && b <= 2){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    

    return 0;
}