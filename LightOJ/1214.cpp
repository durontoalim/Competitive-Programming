#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int modular(string str,int mod ){
    int N = 0,i;
    for(i=0; i<str.length() ; i++){
        N = ( N*10 + ( (int)str[i] - 48 ) ) % mod;
    }

    return N;
}
 
int32_t main()
{
    FastIO();
    int t; cin>>t;
    int cnt = 1;
    while (t--)
    {
        cout<<"Case "<<cnt<<": ";
        string str; cin>>str;
        int n; cin>>n;

        if(str[0] == '-'){
            str[0] = '0';
        }

        int x = modular(str,abs(n));
    
        if(x == 0){
            cout<<"divisible"<<endl;
        }
        else{
            cout<<"not divisible"<<endl;
        }

        cnt++;
    }
    

    return 0;
}