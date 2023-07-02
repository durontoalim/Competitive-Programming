#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    string str; cin>>str;
    int arr[str.length()];
    int cnt = 0;
    int len = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(i%2 == 0){
            arr[cnt++] = str[i]- '0';
            len++;
        }
    }
    sort(arr,arr+len);

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
        if(i == len - 1) continue;
        cout<<"+";
    }
    cout<<endl;
    
    

    return 0;
}