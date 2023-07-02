#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int num = N+1;
    unsigned long long int arr[num];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for (int i = 2; i <= N; i++)
    {
        cout<<arr[i]<<endl;
    }

    

    return 0;
}