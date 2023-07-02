#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool bol[100010];
int cnt = 0;
void zero(int n, int x){
    int check = 5;
    while (n >= check)
    {
        if(x >= check) cnt++;

        bol[check] = true;
        if(check == 29 && x > 29){
            bol[++check] = true;
            check++;
            cnt++;
        }

        check += (5+1);

        
    }
    
}

int32_t main()
{
    

    FastIO();
    int n; cin>>n;
    zero(100006,n);

    if(bol[n]){
        cout<<0<<endl;
        return 0;
    }
    
    int x = 5*(n-cnt);
    int temp = x;

    cout<<5<<endl;

    for (int i = temp; i < x+5; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}