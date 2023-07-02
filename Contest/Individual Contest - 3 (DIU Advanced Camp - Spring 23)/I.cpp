#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t;
    while (cin>>t)
    {
        int arr[t];
        set<int>st;
        for (int i = 0; i < t; i++)
        {
            cin>>arr[i];
        }
        for (int i = 1; i < t; i++)
        {
            int diff = abs(arr[i] - arr[i-1]);

            if(diff > 0 && diff < t){
                st.insert(diff);
            }

        }

        if(st.size() == t-1){
            cout<<"Jolly"<<endl;
        }
        else cout<<"Not jolly"<<endl;
        
    }
    

    return 0;
}