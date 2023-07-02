#include<bits/stdc++.h>

using namespace std;

#define endl "\n" 


uint8_t fibo(int n){
    if(n <= 1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{

    int n;

    while(cin>>n){

        cout<< fibo(n)<<endl;

    }

    
    
    return 0;
}
