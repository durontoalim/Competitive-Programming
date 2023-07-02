#include <bits/stdc++.h>
#define int long long
#define case "Case "
#define case_dot ": "
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    int flag = 1;
    while (t--)
    {
        int n; cin>>n;
        int cnt = 0;
        while (n > 0)
        {
           int ch =  n%2;
           if(ch == 1) cnt++;

           n /= 2;
        }

        if(cnt%2 == 0){
            cout<<case<<flag<<case_dot<<"even"<<endl;
        }
        else{
            cout<<case<<flag<<case_dot<<"odd"<<endl;
        }

        flag++;
        
    }
    
    
    return 0;
}