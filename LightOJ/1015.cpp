#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 2*acos(0.0)
int32_t main()
{
	int t = 1;
	int N; cin>>N;
	while (N--)
	{
		vector<int>v;
		int n; cin>>n;
		for (int i = 0; i < n; i++)
		{
			int x; cin>>x;
			if(x > -1){
				v.push_back(x);
			}
		}
		cout<<"Case "<<t<<": "<<accumulate(v.begin(), v.end(), 0)<<endl;
		t++;
		
	}
	
	

	return 0;
}