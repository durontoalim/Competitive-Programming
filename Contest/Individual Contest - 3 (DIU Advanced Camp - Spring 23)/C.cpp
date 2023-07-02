#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int MOD = 1e9+7;

int pw(int n){
    int sum = 1;
    while (n--)
    {
        sum = (sum*2)%MOD;
    }

    return sum;
    
    
}
int32_t main()
{
    FastIO();
    int t; cin>>t;

    int result = pw(t);

    cout<<result<<endl;

    return 0;
}