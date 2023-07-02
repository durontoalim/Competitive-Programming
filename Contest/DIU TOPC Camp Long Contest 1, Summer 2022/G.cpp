#include<bits/stdc++.h>

using namespace std;

#define endl "\n" 



int main()
{

    long long int N;

    while(cin>>N && N >= 0 ){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        long long int result;

        result = ( N*N+N+2 )/2;

        cout<<result<<endl;

    }
    
    
    return 0;
}
