#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int cnt = 1;
    int t; cin>>t;
    while (t--)
    {
        cout<<"Case "<<cnt<<": ";
        cnt++;
        int a,b,x,y; cin>>a>>b>>x>>y;
        if( abs(a-x) == abs(b - y)){
            cout<<"1"<<endl;
        }
        else{
            if( abs(a-x)%2 ==  abs(b-y)%2 ) cout<<2<<endl;
            else cout<<"impossible"<<endl;
        }
    }
    

    return 0;
}