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


    string str,str2,ss;
    str = "samsung";

    cin>>str2;

    int count = 0;
    int len = str.length();
    int len2 = str2.length();

    for (int i = 0; i < len2; i++)
    {
        str2[i] = tolower(str2[i]);
    }
    
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len -1 ; j++)
        {
            ss = str.substr(i , j+1 );

            if(ss == str2){
                count++;
                break;
            }
        }
        
    }

    if(count > 0){
        cout<<"SRBD"<<endl;
    }
    else if(str == str2){
        cout<<"SRBD"<<endl;
    }
    else{
        cout<<"GHOST"<<endl;
    }
    


    
    


    return 0;
}