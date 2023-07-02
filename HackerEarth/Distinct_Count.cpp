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
    FastIO();
    cin>>test_case;
    while (test_case--)
    {
        vi v;
        int x,n; cin>>x>>n;
        for (int i = 0; i < x; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
		sort(all(v));
        int distinct_num = unique(v.begin(), v.end()) - v.begin();

        if(distinct_num == n){
            cout<<"Good"<<endl;
        }
        else if(distinct_num > n) cout<<"Average"<<endl;
        else cout<<"Bad"<<endl;
        
        
    }

    return 0;
}