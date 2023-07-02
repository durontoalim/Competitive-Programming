#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1e6+10;
double arr[N];

void fun(){
    arr[0] = 0;
    for (int i = 1; i < N; i++)
    {
        arr[i] = arr[i-1]+log10(i);
    }
    
}
int32_t main()
{
    FastIO();
    int cnt = 1;
    fun();
    int t; cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;
        int result = arr[a]/log10(b);
        cout<<"Case "<<cnt<<": ";
        cout<<result<<endl;
        cnt++;
    }
    

    return 0;
}