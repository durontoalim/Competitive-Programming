#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    
    while(N--){
        int n;
        cin>>n;
        
            if(n<= 10){
                cout<<"0 "<<n<<endl;
            }
            else{
                cout<<"10 "<<n-10<<endl;
            }
    }
    return 0;
}