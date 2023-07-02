#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;cin>>N;
	int cnt  = 1;
    while (N--)
    {
        int self,lift;
        cin>>self; cin>>lift;
        if(self == lift){
            cout<<"Case "<<cnt<<": "<<self*4 + 19<<endl;
        }
		else if(self < lift){
			cout<<"Case "<<cnt<<": "<<lift*4 + 19<<endl;
		}
		else{
			int come = self-lift;

			cout<<"Case "<<cnt<<": "<<come*4 + self*4 + 19 <<endl;
		}

		cnt++;
    }
    

    return 0;
}