#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int n,find_value; cin>>n>>find_value;

    int arr[n+1];
    int sum = 0;
    int pre_sum[n+10];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
        pre_sum[i] = sum;
        if(pre_sum[i] == find_value) cnt++;
    }
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int subs = pre_sum[i] - find_value;

        if(mp.find(subs) != mp.end()){
            cnt += mp[subs];
        }
        mp[pre_sum[i]]++;
    }
    cout<<cnt<<endl;
    
    return 0;
}