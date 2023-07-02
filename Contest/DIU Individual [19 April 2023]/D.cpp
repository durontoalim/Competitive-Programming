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
        int n,b; cin>>n>>b;
        int x = abs(b-3);
        int a = n-x;
        if(a%2 == 0){
            int x = a/2;
            if(x%2 == 0){
                cout<<a/2<<" "<<(a/2)/2<<" "<<(a/2)/2<<" ";
            }
            else{
                cout<<a/2-1<<" "<<a/2-1<<" "<<2<<" ";
            }
        }
        else{
            cout<<a/2<<" "<<a/2<<" "<<1<<" ";
        }
        for (int i = 0; i < x; i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}