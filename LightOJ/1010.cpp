#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
	int N; cin>>N;
	int t = 0;
    while (N--)
    {
        t++;
        int a,b; cin>>a>>b;
        int product = a*b;
        if(a == 1 || b == 1){
            cout<<"Case "<<t<<": "<<product<<endl;
            continue;
        }
        if(a == 2 || b == 2){
            int extra = 0;
            int mx = max(a,b);
            
            if(mx%4 == 1 || mx%4 == 3) extra += 1;
            if(mx%4 == 2) extra += 2;
            
            cout<<"Case "<<t<<": "<< (product/2) + extra <<endl;
            continue;
        }

        if(product%2 == 0) cout<<"Case "<<t<<": "<<product/2<<endl;
        else cout<<"Case "<<t<<": "<<(product/2)+1<<endl;
    }

	return 0;
}