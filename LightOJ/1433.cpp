#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    double angle;
    for (int i = 1; i < t+1; i++)
    {
        cout<<"Case "<<i<<": ";
        int ox,oy,ax,ay,bx,by; cin>>ox>>oy>>ax>>ay>>bx>>by;

        double r = sqrt( pow(ax-ox,2) + pow(ay-oy,2) );
        double dis = sqrt( pow(bx-ax,2) + pow(by-ay,2) );
        double pw_r = r*r;
        double pw_dis = dis*dis;
        angle = acos( (pw_r+pw_r - pw_dis) / (2.0*pw_r));
     
        cout<<fixed<<setprecision(6)<<angle*r<<endl;

    }
    

    return 0;
}