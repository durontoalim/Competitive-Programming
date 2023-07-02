#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int x,y;
        cin>>x>>y;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
        }

        int max = arr[1] ^ arr[0] ;

        for (int i = 2; i <= y; i++)
        {
            int x_or = arr[i] ^ max ;
            if(x_or > max){
                max = x_or;
            }
        }
        cout<<max<<endl;
        
    }
    

    return 0;
}