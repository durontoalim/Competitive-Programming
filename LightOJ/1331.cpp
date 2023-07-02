#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int cnt = 1;
    int t; cin>>t;
    while (t--)
    {
        double r1,r2,r3; cin>>r1>>r2>>r3;
        double a,b,c;
        a = r1+r2;
        b = r1+r3;
        c = r2+r3;
        double s = (a+b+c)/(double)2;
        double Tri_area = sqrt(s * (s-a)* (s-b)*(s-c) );
        double O1 = acos( (a*a + b*b - c*c)/(2*a*b) );
        double O2 = acos( (a*a - b*b + c*c)/(2*a*c) );
        double O3 = acos( (-a*a + b*b + c*c)/(2*b*c) );
        double x = 0.5*r1*r1*O1; 
        double y = 0.5*r2*r2*O2; 
        double z = 0.5*r3*r3*O3;

        double total = x+y+z;
        cout<<"Case "<<cnt<<": "<<fixed<<setprecision(8)<<Tri_area - total<<endl;

        cnt++;
        
    }
    

    return 0;
}