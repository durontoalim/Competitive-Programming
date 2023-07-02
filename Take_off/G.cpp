#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int h = 1;
	while(t--){
		printf("Case %d: ",h++);
		string s;cin>>s;
		int n = s.size();
		int final = 0;
		for(int i=0;i<n/2;i++){
			int x = abs(s[i] - s[n-i-1]);
			final += min(x,26-x);
		}
		cout<<final<<endl;
	}
	return 0;
}