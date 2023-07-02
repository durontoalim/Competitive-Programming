#include <bits/stdc++.h>

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \

using namespace std;

int main() {
	int n; 
	long long int l,r; 
	int d;
	cin>>n;
	
	while(n--){
		
		int count  = 0;
		int count2 = 0;
		cin>>l>>r>>d;
		int x = 0;
		if(r < 10){
			x = 1;
			int tt = 0;
			for(int i=l; i<= r; i++){
				if(i == d){
					cout<< "1"<<endl;
					tt++;
				}
			}
			if(tt == 0){
				cout<<"0"<<endl;
			}
		}

		if(x == 1) continue;

		while(l%10 != 0){
			count++;
			l++;
		}
		while(r%10 != 0){
			r--;
			count2++;
		}
		long long int t = 0;
		count = 10-count; 
		if(count <= d) t++;
		if(count2 >= d){
			t++;
		}

		t += (r-l)/10;

		cout<<t<<endl;
	}
	return 0;
}
