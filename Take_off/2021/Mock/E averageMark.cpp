#include <bits/stdc++.h>

using namespace std;

int main() {

	double n,q;
	cin>>n>>q;
	vector<int>v;

    int summ = 0;

	for(int i=0; i< n; i++){
		int x;
		cin>>x;
		v.push_back(summ);

        summ += x;

	}

    v.push_back(summ);


	while(q--){

		double l,r;
		cin>>l>>r;
		
		double frmla2 = (r-l) + 1 ;
        
        double result = v[r]-v[l-1];

		cout<<fixed<<setprecision(2)<< result/frmla2 <<endl;
	}
	
	
	return 0;
}
