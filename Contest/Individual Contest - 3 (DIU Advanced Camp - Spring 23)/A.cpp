#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t,n;
    while ( cin>>n>>t)
    {
        int sum = 0;
        int wh = n;
        while (wh >= t)
        {
            int div = wh/t;
            int mod = wh%t;
            sum += div;
            wh = div+mod;
        }
        cout<<sum+n<<endl;
        
    }
    

    return 0;
}