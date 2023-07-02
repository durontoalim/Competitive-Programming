#include <bits/stdc++.h>
#define int long long
#define case "Case "
#define semicollon ": "
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    int cnt  = 1;
    while (t--)
    {
        int a,b; cin>>a>>b;
        vector<int>v;
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            int x; cin>>x;
            v.push_back(x);
            sum += x;
        }
        int maxx = *max_element(v.begin(),v.end());
        for (int i = 0; i < b-1; i++)
        {
            sum += maxx;
        }
        cout<<case<<cnt<<semicollon<<sum<<endl;
        
        cnt++;
    }
    
    
    return 0;
}