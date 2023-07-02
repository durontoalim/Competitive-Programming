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
        if(a%2 == 0){
            int x = a/2;
            if(x%2 == 0){
                cout<<a/2<<" "<<(a/2)/2<<" "<<(a/2)/2<<endl;
            }
            else{
                cout<<a/2-1<<" "<<a/2-1<<" "<<2<<endl;
            }
        }
        else{
            cout<<a/2<<" "<<a/2<<" "<<1<<endl;
        }
    }
    
    return 0;
}