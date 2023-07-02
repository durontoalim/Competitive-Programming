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
        int N; cin>>N;
        unsigned int mul;
        N--;
        unsigned int a = (3*(N/3)*((N/3)+1))/2;
        unsigned int b = (5*(N/5)*((N/5)+1))/2;
        unsigned int c = (15*(N/15)*((N/15)+1))/2;
        

        cout<<a+b-c<<endl;
        
    }
    

    return 0;
}