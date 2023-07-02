#include<bits/stdc++.h>
using namespace std;

#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void recursive(int arr[], int i, int len){
    if(i < len){
        recursive(arr,i+1, len);
        cout<<arr[i]<<" ";
    }
}


int32_t main()
{
    FastIO();
    cin>>test_case;
    int arr[test_case];
    for (int i = 0; i < test_case; i++)
    {
        cin>>arr[i];
    }

    recursive(arr, 0, test_case);
    
    
    

    return 0;
}