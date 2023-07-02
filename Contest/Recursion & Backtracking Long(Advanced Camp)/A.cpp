#include <bits/stdc++.h>

using namespace std;


int summations(int arr[], int n){

    if(n <= 0){
        return 0;
    }
    return (  summations(arr,n-1) + arr[n-1]) ;

}
int main()
{
    int N;
    cin>>N;

    int t = 1;

    while (N--)
    {
        int n;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

    
        cout<<"Case " <<t<<": "<<summations(arr,n)<<endl;
        t++;
        
    }
    

    return 0;
}