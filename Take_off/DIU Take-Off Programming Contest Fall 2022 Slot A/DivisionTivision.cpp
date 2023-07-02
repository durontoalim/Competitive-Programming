#include <bits/stdc++.h>

#define int long long

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \


using namespace std;

int32_t main()
{
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int cnt = 0,cnt2 = 0;

    int x = a*b;
    int y = c*d;
    if(cnt){
         while (x%2==0 )
        {
            cnt++;
            x /= 2;
        }
    }
   

    while (y % 2 == 0)
    {
        cnt2++;
        y /= 2;
    }


    if(cnt % cnt2 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}