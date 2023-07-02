#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	while (cin>>N && N != 0)
	{
		char ch;
		int n;
		string str;
		vector<int>arr(26,0);
		vector<int>arr2(26,0);
		
		int sum = 0, cnt = 0, flag = 0;
		for (int i = 0; i < N; i++)
		{
			cin>>ch>>n>>str;
			
			if(str == "correct" && arr[(int)ch-65] == 0){
				arr[(int)ch-65] = n;
			}
			if(str == "incorrect" && arr[(int)ch-65] == 0){
				arr2[(int)ch-65] += 20;
			}
			
		}
		for (int i = 0; i < 26; i++)
		{
			if(arr[i] != 0){
				cnt++;
				sum += (arr[i] + arr2[i]);
			}
		}
		
		cout<<cnt<<" "<<sum<<endl;
		
	}
	

	return 0;
}