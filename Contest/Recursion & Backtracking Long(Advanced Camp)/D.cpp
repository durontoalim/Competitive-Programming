#include <bits/stdc++.h>

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \


using  namespace std;

#define for_loop(i, n) for (int i = 0; i < int(n); i++)
#define PI acos(-1)
#define endl      "\n"
#define clr(arr,x)      memset(arr, x, sizeof arr)
#define vout(v,sz)      for(int w=0;w<sz;w++){if(w) cout<<" ";else cout<<endl; cout<<v[w];}
#define all(v)          v.begin(), v.end()
#define rall(v)         v.rbegin(), v.rend()
#define F first
#define S second
#define tu tuple <int, int, int>
#define eps (double)(1e-7)
 
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void file();


int recursive(ll n){
    
    ll sum = 0, num = n;
    while (num != 0)
    {
        int mod = num%10;
        sum += mod;
        num /= 10;

    }

    if(sum/10 == 0){
        cout<<sum<<endl;
    }
    else{
        recursive(sum);
    }

    return 0;
    
}

int main()
{
    long long int n;
    while (cin>>n)
    {
        if(n == 0){
            break;
        }

        recursive(n);
    }
    
    
    
    

    return 0;
}