#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    int max = 0;
    int posi;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if(max < arr[i]){
            max = arr[i];
            posi = i;
        }
    }

    cout<<posi+1<<endl;
    
    

    return 0;
}