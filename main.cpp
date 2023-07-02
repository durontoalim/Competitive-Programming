#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
      
        int mx = max(n,k);
        int mn = min(n,k);
        int result = 2*mn;

        if(n == k){
            cout<<result<<endl;
        }
        else if(n == k+1 || k == n+1){
            cout<<result+1<<endl;
        }
        else{
            int x = mx - mn - 1;
            cout<<result+(2*x)+1<<endl;
        }
    }

    return 0;
}