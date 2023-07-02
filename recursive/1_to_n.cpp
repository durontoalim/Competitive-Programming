#include <bits/stdc++.h>

using namespace std;


int recursive(int n){
    if(n==1) return 1;
    recursive(n-1);
    cout<<n<<endl;
}



int main()
{
    int N; cin>>N;

    recursive();

    return 0;
}