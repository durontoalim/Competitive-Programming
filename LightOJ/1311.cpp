#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int cnt = 0;
    int t; cin>>t;
    while (t--)
    {
        cnt++;

        double v1, v2, v3, a1, a2; cin>>v1>>v2>>v3>>a1>>a2;
        double t1 = v1/a1;
        double t2 = v2/a2;

        double d1 = pow(v1,2)/(2*a1);
        double d2 = pow(v2,2)/(2*a2);

        double total_dis = d1+d2;
        double bird_move = max(t1,t2)*v3;

        cout<<"Case "<<cnt<<": "<<fixed<<setprecision(10)<<total_dis<<" "<<bird_move<<endl;
    }
    

    return 0;
}