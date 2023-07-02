#include <bits/stdc++.h>
using namespace std;

int recursive(int n){

	cout<<n<<endl;

	if(n==1) {
		return 1;
	}

    recursive(n-1);

    
	return 0;
}

int main()
{
    int N; cin>>N;
	recursive(N);

	return 0;
}