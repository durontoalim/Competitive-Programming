#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    cin.ignore();
    while (t--)
    {
        string str; getline(cin,str);

        if(str.length() %2 != 0){
            cout<<"No"<<endl;
            continue;
        }
        
        stack<char>st;
        stack<char>st2;

        for (int i = 0; i < str.length(); i++)
        {
            

            if(str[i] == '(' || str[i] == '['){
                st.push(str[i]);
            }

            if(str[i] == ')' ){
                st2.push(str[i]);
                if(st.empty()){
                    break;
                }
                char ch = st.top();

                if(ch == '('){
                    st.pop();
                    st2.pop();
                }
            }

            if(str[i] == ']' ){
                st2.push(str[i]);
                if(st.empty()){
                    break;
                }
                char ch = st.top();

                if(ch == '['){
                    st.pop();
                    st2.pop();
                }
            }
            
        }


        if(st.empty() && st2.empty()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    

    return 0;
}