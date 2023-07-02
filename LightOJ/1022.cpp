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
		double r; cin>>r;
		double circle_area = PI*pow(r,2);
		double sq_area = 4*pow(r,2);
		cout<<fixed<<setprecision(2)<<"Case "<<t<<": "<<sq_area-circle_area<<endl;
		t++;
	}
	return 0;
}