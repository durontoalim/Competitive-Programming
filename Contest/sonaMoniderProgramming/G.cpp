//Author :: Utin
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

#define SQ(n) (n)*(n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
const double PI = acos(-1);
#define MOD 1000000007

#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


// Debug

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}
 
#define dbg(args...) do {cerr << #args << " : "; alim(args); } while(0)
 
void alim () {
            cerr << endl;
}
 
template <typename T>
void alim( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}
 
template <typename T, typename ... hello>
void alim( T arg, const hello &... rest) {
            cerr << arg << ' ';
                alim(rest...);
}

/*
--------------MAIN CODE---------
*/

int test_case;

int utin()
{
    
    int n; cin>>n;

    string str = to_string(n);

    string str2;

    if(n < 10){
        cout<<n<<endl;
        return 0;
    }
    for (int i = 0; i < str.length()-1; i++)
    {
        str2 += '9';
    }

    int nine = stoll(str2);
    string str3;
    for (int i = 0; i < str.length(); i++)
    {
        str3 += str[0];
    }

    int av = stoll(str3);

    int mn = min(n-nine, abs(av-n));

    char ch = ++str[0];
    int x = ch-48;

    string str22 = to_string(x);
    string lst;
    if(str22 == "10"){
        for (int i = 0; i < str.length()+1; i++)
        {
            lst += '1';
        }
        
    }
    else{
        for (int i = 0; i < str.length(); i++)
        {
            lst += str22[0];
        }
    }

    int int_lst = stoll(lst);

    mn = min(mn, int_lst-n);
    
    if(mn == n-nine){
        cout<<nine<<endl;
    }
    else if(mn == abs(av-n)){
        cout<<av<<endl;
    }
    else{
        cout<<int_lst<<endl;
    }
    

    return 0;
}

int32_t  main()
{
    FastIO();
    cin>>test_case;
    while (test_case--)
    {
        utin();
    }

    return 0;
}