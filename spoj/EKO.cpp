#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n, m; cin>>n>>m;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int left = 0, right = n;
    while(left <= right){
        int sum = 0;
        int mid = (left+right)/2;
        for (int i = mid+1; i < n; i++)
        {
            sum += v[i]-v[mid];
        }
        if(sum == m){
            cout<<v[mid]<<endl;
            break;
        }
        int cnt = 0;
        if(sum > m){
            // sum = 0;
            // int value = v[mid]+1;
            // int t = mid+1;
            // int mid_t = mid;
            // int i;
            // for (i = t; i < n; i++)
            // {
            //     sum += v[i]-mid_t;
            //     if(i == n-1 && sum != m){
            //         i = mid_t++;
            //         sum = 0;
            //     }
            // }
            // if(sum == m){
            //     cout<<mid_t-1<<endl;
            //     cnt = 1;
            // }
            
        }
        else{
            right = mid;
        }
        if(cnt == 1) break;
        
    }

    return 0;
}