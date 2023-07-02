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
        int arr[n];
        int evn = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] % 2 == 0){
                evn++;
            }
            else odd++;
        }

        // if(arr[0]%2== 0){
        //     cout<< -1<<endl;
        //     continue;
        // }

        int result = n - evn;
        if(result == 0){
            cout<< -1<<endl;
        }
        else{
            cout<< evn <<endl;
        }
        
        
    }
    

    return 0;
}