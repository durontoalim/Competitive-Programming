#include <bits/stdc++.h>
#define int long long
using namespace std;
#define endl '\n'
#define mod 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,b;
    while (cin>>n>>b)
    {
        cout<<n<<" "<<b<<" ";
        if(n>b){
            int temp = n;
            n = b;
            b = temp;
        }
        int mx = INT_MIN;
        while(n <= b){
            bool bol = true; int cnt = 1;

            int N = n;
            if(n == 1) bol = false;
            while(bol){

                if(N%2 == 1){
                    N = (N*3)+1;
                }
                else N = N/2;

                if(N == 1) bol = false;

                cnt++;
            }
            n++;

            if(cnt > mx) mx = cnt;
        }

        cout<<mx<<endl;
    }

    return 0;
}