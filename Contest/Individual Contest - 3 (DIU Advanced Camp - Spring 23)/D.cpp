#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    for (int j = 1; j <= t; j++)
    {
        int a,b; cin>>a>>b;
        int sum = 0;
        for (int i  = a; i <= b; i++)
        {
            if(i%2 != 0){
                sum += i;
            }
        }

        cout<<"Case "<<j<<": "<<sum<<endl;
        
    }
    
    return 0;
}