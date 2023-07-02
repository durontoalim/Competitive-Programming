#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int tt = 1;
		while(n--){
			int a,b;
			cin>>a>>b;
			string str;
			cin>>str;
			vector<char>v;
			vector<int>v2;
			while(b--){
				char ch;
				cin>>ch;
				v.push_back(ch);
			}

			cout<<"Case "<<tt<<": ";

            int xx = 0;
            int hsh[a+1];

            for (int i = 0; i < a ; i++)
            {
                for (int j = 0; j < v.size() ; i++)
                {
                    if(str[i] == v[j]){
                        hsh[v[j]]++;
                        if(hsh[v[j]] == 3) break;
                    }
                    else{
                        cout<<str[i];
                    }
                    
                }
            }
            cout<<endl;
            tt++;
		}
	return 0;
}
