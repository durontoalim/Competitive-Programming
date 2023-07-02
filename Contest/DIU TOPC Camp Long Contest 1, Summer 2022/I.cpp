#include<bits/stdc++.h>

using namespace std;

#define endl "\n" 


int main()
{

    int n;

    while(cin>>n && n != 0){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        int num = n-10;

        if(n <= 100){
            int x = 91;
            cout<<"f91("<<n<<") = "<<x<<endl;
        }

        if(n >=101 ){
            cout<<"f91("<<n<<") = "<<num<<endl;
        }

    }

    
    
    return 0;
}
