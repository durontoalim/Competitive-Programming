#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int n = 50;
    int arr[n+1];

    arr[0] = 1;
    arr[1] = 2;
    int sum = 2;
    for (int i = 2; i < 40; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i]%2 == 0){
            sum += arr[i];
        }
        if(arr[i] == 3524578){
            break;
        }
    }
    cout<<sum<<endl;

    
    return 0;
}