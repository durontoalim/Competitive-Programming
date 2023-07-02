#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    int flag = 1;
    while (t--)
    {
        cout<<"Case "<<flag<<": ";
        int n,p,q; cin>>n>>p>>q;
        int arr[n+1];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] <= q) {
                cnt++;
                q -= arr[i];
            }
        }
        if(cnt > p){
            cout<<p<<endl;
        }
        else cout<<cnt<<endl;

        flag++;
    }
    

    return 0;
}