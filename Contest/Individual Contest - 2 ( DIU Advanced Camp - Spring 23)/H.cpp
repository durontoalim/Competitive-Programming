#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    string str; cin>>str;
    set<char>st;
    for(int i=0; i< str.length(); i++){
        int ch = str[i];
        st.insert(ch);
    }
    int len = st.size();
    if(len%2 ==0){
        cout<<"CHAT WITH HER!\n";
    }
    else{
        cout<<"IGNORE HIM!\n";
    }

    return 0;
}