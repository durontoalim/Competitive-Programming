#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

#define int long long
typedef vector<int> vi;
typedef vector<int>::iterator vit;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define F first
#define S second

#define case "Case "
#define semicollon ": "
#define endl '\n'

#define utin(i,n,N) for(int i = n; i< N; i++)
#define SQ(n) (n)*(n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
const double PI = acos(-1);
#define MOD 1000000007
 
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int test_case;


int32_t main()
{
    cin>>test_case;
    int t = 1;
    while (test_case--)
    {
        double r1,r2,h,p; cin>>r1>>r2>>h>>p;
        double r3 = ( p*((r1-r2)/h) ) + r2;
        
        double frmula = 1/3.00*PI*p*((r3*r3)+(r2*r2) + (r3*r2));
        
        cout<<case<<t<<semicollon<<fixed<<setprecision(9)<<frmula<<endl;

        t++;
        
    }

    return 0;
}