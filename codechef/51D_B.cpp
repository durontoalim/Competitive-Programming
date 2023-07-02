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

// User Define Function

void user_defined();

int fibo(int n);

//--------------------------------------

int main(){

    // Speed Booster

    FastIO;

    // Implement


    int N;
    cin>>N;

    while(N--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;

        int first_tv = x-a;
        int second_tv = y-b;

        if(first_tv == second_tv ){
            cout<<"Any\n";
        }
        else if(first_tv < second_tv){
            cout<<"First\n";
        }
        else if( first_tv > second_tv){
            cout<<"Second\n";
        }
    }


    return 0;
}



// User Defined Function Implement

// void user_defined(){

// }

// int fibo(int n){
//     if(n == 0) return 0;

//     if(n == 1 || n == 2){
//         return 1;
//     }
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }