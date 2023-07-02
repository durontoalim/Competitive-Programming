#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int sq = sqrt(sq);
        int cnt = 1;
        for (int i = 2; i*i <= n; i++)
        {
            if(n%i == 0){
                cnt = 0;
                break;
            }
        }

        if(cnt){
            cout<<n<<endl;
            continue;
        }
        
        for (int i = sq; i >= 2 ; i--)
        {
            if(n%i == 0){
                bool bol = true;
                for (int j = 2; j < i; j++)
                {
                    if(i%j == 0){
                        bol = false;
                        break;
                    }
                }

                if(bol){
                    cout<<max(i, )<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}