#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int N; cin>>N;
    int t = 1;
    while (N--)
    {
        int n; cin>>n;
        int sq = sqrt(n);
        if(n%2 == 1){
            cout<<"Case "<<t<<": Impossible"<<endl;
        }
        else{
            int stop = 0;
            for (int i = 2; i < 1000000; i += 2)
            {
                if(i == n){
                   cout<<"Case "<<t<<": Impossible"<<endl;
                   break;
                }
                if(n%i == 0 && (n/i)%2 == 1 ){
                    cout<<"Case "<<t<<": "<<n/i<<" "<<i<<endl;
                    break;
                }
            }
        }
        t++;
    }
    

    return 0;
}