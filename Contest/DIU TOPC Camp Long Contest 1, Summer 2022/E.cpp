#include<bits/stdc++.h>

using namespace std;

#define endl "\n" 


int main()
{

    int N;
    cin>>N;
    while(N--){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        int n,num;
        cin>>n;

        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;

        n /= 10;

        int result = n%10;

        cout<<abs(result)<<endl;


    }
    
    
    return 0;
}
