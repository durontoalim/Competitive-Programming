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
        int n; cin>>n;
        int arr[n+1];
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        if(n == 1){
            cout<<"yes"<<endl;
        }
        else{
            sort(arr,arr+n);
            int cnt = 1;
            for (int i = 1; i < n; i++)
            {
                if(arr[i] == arr[i-1]) continue;
                int x = arr[i] - arr[i-1];
                if(mp[x]  < 1){
                    cnt = 0;
                    break;
                }
            }

            if(cnt){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
            
        }
        
    }
    

    return 0;
}