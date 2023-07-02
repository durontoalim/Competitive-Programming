#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
	int t; cin>>t;
	int cnt = 1;
	while (t--)
	{
		int n; cin>>n;
		int sq = sqrt(n);
		int SQ = sqrt(n);
		if(n == sq*sq){
			if(n%2 == 0){
				cout<<"Case "<<cnt<<": "<<(int)sq<<" "<<1<<endl;
			}
			else{
				cout<<"Case "<<cnt<<": "<<1<<" "<<(int)sq<<endl;
			}
		}
		else{
			int Y = sqrt(n)+1;
			if( Y%2 == 0){
				int distance = (Y*Y)-n;
				if(SQ >= distance){
					cout<<"Case "<<cnt<<": "<<Y<<" "<<(int)distance+1<<endl;
				}
				else{
					cout<<"Case "<<cnt<<": "<<(int)( (sqrt(n)*2)-distance ) + 1<<" "<<(int)sqrt(n)+1<<endl;
				}
			}
			else{
				int distance = (Y*Y)-n;
				if(SQ >= distance){
					cout<<"Case "<<cnt<<": "<<(int)distance+1<<" "<<Y<<endl;
				}
				else{
					cout<<"Case "<<cnt<<": "<<(int)sqrt(n)+1<<" "<<(int)( (sqrt(n)*2)-distance ) + 1<<endl;
				}
			}
			
		}

		cnt++;

	}
	
	return 0;
}