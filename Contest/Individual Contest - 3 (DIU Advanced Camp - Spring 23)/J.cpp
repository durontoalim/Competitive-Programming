#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int n;
    int cnt = 1;
    while (cin>>n && n != 0)
    {
        cout<<"Set #"<<cnt<<endl;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        
        int diff = sum/n;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if(diff < arr[i]) result += arr[i]-diff;
            else{
                result += diff - arr[i];
            }
        }
        cout<<"The minimum number of moves is "<<result/2<<"."<<endl<<endl;
        cnt++;
        
    }

    return 0;
}