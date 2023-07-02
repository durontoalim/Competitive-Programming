#include <bits/stdc++.h>
#define int long long
#define case "Case "
#define semicollon ": "
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    int flag = 1;
    while (t--)
    {
        int a,b; cin>>a>>b;
        
        int sum = ((a+1)*a)/2;
        int sum2 = 0;
        int cnt = 1, cnt2 = 0;
        while (1)
        {
            if(cnt > a) break;
            
            sum -= cnt;
            if(cnt%b == 0){
                cnt -= b;
            }

            cnt++;

        }

        cout<<case<<flag<<semicollon<<sum-sum2<<endl;
        flag++;
        
    }
    
    
    return 0;
}