#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


bool fun(int a, int b){
    if(a == b){
        return 1;
    }
    if(a%3 != 0){
        return 0;
    }

    return fun(a/3,b) || fun(a/3*2,b);
}
int32_t main()
{
    FastIO();
    int t; cin>>t;

    while (t--)
    {
        int a,b; cin>>a>>b;

        if(fun(a,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}