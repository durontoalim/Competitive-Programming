#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int distance, n; cin>>distance>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if(abs(arr[i] - arr[i-1]) > distance ) {
            cout<<"GAME OVER"<<endl;
            return 0;
        }
    }
    cout<<"YOU WIN"<<endl;
    
    return 0;
}