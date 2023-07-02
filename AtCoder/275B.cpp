#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;

    int MOD = 998244353;

    a = a%MOD;
    b = b%MOD;
    c = c%MOD;
    x = x%MOD;
    y = y%MOD;
    z = z%MOD;

    long long int frmla = ((a*b)%MOD)*c%MOD;
    long long int frmla2 = ((x*y)%MOD)*z%MOD;;
    long long int hello = (frmla- frmla2) % MOD;

    cout<<hello<<endl;
    

    return 0;
}