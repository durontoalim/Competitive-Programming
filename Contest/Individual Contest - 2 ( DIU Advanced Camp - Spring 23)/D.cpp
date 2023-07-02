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
        int n,m,result = 0;
        cin>>n>>m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            result += arr[i];
        }
        if(result >= m){
            cout<<m<<endl;
        }
        else{
            cout<<result<<endl;
        }
        
    }
    

    return 0;
}