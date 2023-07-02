#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int h = 1,i = 0;
	while(t--){
		printf("Case %d: ",h++);
		int mx = 0,mn = 0;
		scanf("%d %d",&l,&r);
		if(l > r){
			int tm = r;
			r = l;
			l = tm;
		}
		

		for(int i=l;i<=r;i++){
			if(i < 0){
				minn += i;
			}
			if(i > 0){
				maxx += i;
			}
		}

		if(minn == 0){
			printf("%d\n",l);
		}else{
			printf("%d\n",minn);
		}
		if(maxx == 0){
			printf("%d\n",r);
		}else{
			printf("%d\n",maxx);
		}
		
	}
	return 0;
}